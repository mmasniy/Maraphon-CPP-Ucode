#pragma once
#include <iostream>
#include <memory>

namespace CBL {
template <class T>
class Vector {
    public:
    using iterator = T*;

    Vector() : Vector(0) {
    }
    explicit Vector(size_t size) : m_size(size), m_capacity(size) {
        m_buffer = reinterpret_cast<T*>(std::malloc(size * sizeof(T)));
//            new(m_buffer + m_size) T();
//            std::uninitialized_copy()
    }

    Vector(size_t size, const T& value) {
        m_buffer = reinterpret_cast<T*>(std::malloc(size * sizeof(T)));
        for (size_t i = 0; i < m_size; ++i) {
            new(m_buffer + m_size) T(value);
        }
    }

    Vector(iterator first, iterator last)
        : m_size(last - first), m_capacity(last - first) {
        m_buffer = reinterpret_cast<T*>(std::malloc((last - first) * sizeof(T)));
        std::uninitialized_copy(first, last, m_buffer);
    }
    //доделать - не работает
    Vector(const std::initializer_list<T>& lst) : m_size(lst.size()), m_capacity(lst.size()) {
        m_buffer = reinterpret_cast<T*>(std::malloc(lst.size() * sizeof(T)));
        int i = 0;
        for (auto it = lst.begin(); it != lst.end(); ++it, ++i) {
//            new(m_buffer + i) T(*it);
            m_buffer[i] = *it;
        }
//        std::copy();
//        std::uninitialized_copy(lst.begin(), lst.end(), m_buffer);
    }
    Vector(const Vector<T>& other) : m_size(other.size()), m_capacity(other.size()){
        m_buffer = reinterpret_cast<T*>(other.size() * sizeof(T));
//        auto &iter = m_buffer;
//        for (auto& o : other) {
//            *iter = o;
//            ++iter;
//        }
        std::uninitialized_copy(other.begin(), other.end(), m_buffer);
    }

    ~Vector() {
//        for (size_t i = 0; i < m_size; ++i) {
//            free(*(m_buffer + i));
//        }
        delete m_buffer;
    }

    Vector<T>& operator=(const Vector<T>& other) {
        if (this != &other) {
            m_buffer = reinterpret_cast<T*>(other.m_capacity() * sizeof(T));
            m_size = other.m_size;
            m_capacity = other.m_capacity;
            std::copy(other.begin(), other.end(), m_buffer);
        }
        return *this;
    }

    bool operator==(const Vector<T>& other) const {
        auto m_iter = m_buffer;
        if (m_iter == nullptr || m_size != other.m_size) {
            return false;
        }
        for (auto it = other.begin(); it != end(); ++it) {
             if (*m_iter != *it) {
                 return false;
             }
        }
        return true;
    }

    bool operator!=(const Vector<T>& other) const {
        return !(this == other);
    }

    bool operator<(const Vector<T>& other) const {
        return std::lexicographical_compare(m_buffer, m_buffer + m_size, other.m_buffer, other.m_buffer + other.m_size);
    }

    bool operator>(const Vector<T>& other) const {
        return !(this < other) && (this != other);
    }

    bool operator<=(const Vector<T>& other) const {
        return this < other || this == other;
    }

    bool operator>=(const Vector<T>& other) const {
        return this > other || this == other;
    }

    //iterators
    iterator begin() const {
        return m_buffer;
    }

    iterator end() const {
        return m_buffer + m_size;
    }

    //capacity
    size_t size() const {
        return m_size;
    }
    size_t capacity() const {
        return m_capacity;
    }
    bool isEmpty() const {
        return m_size == 0;
    }

    void resize(size_t size, const T& value = T()) {
        T* new_vector = NULL;
        if (size >= m_capacity) {
            m_capacity = size;
            new_vector = reinterpret_cast<T*>(std::malloc(m_capacity * sizeof(T)));
            auto iter = new_vector;
            for (auto it = m_buffer; it < m_buffer + m_size; ++it, ++iter) {
                *iter = *it;
            }
            for (; iter < new_vector + size; ++iter) {
                *iter = value;
            }
        } else if (size < m_capacity) {
            new_vector = reinterpret_cast<T*>(std::malloc(m_capacity * sizeof(T)));
            auto iter = new_vector;
            for (auto it = m_buffer; it < m_buffer + size; ++it, ++iter) {
                *iter = *it;
            }
        }
        delete m_buffer;
        m_buffer = new_vector;
    }

    void reserve(size_t size) {
        T* new_vector;
        if (size > m_capacity) {
            m_capacity = size;
            new_vector = reinterpret_cast<T*>(std::malloc(m_capacity * sizeof(T)));
            auto iter = new_vector;
            for (auto it = m_buffer; it < m_buffer + size; ++it, ++iter) {
                *iter = *it;
            }
//            free(m_buffer + m_size);
            delete m_buffer;
            m_buffer = new_vector;
        }
    }

    //element access
    T& operator[](size_t index) const {
        return *(m_buffer + index);
    }

    T& at(size_t index) const {
        if (index > m_size) {
            return *(m_buffer + index);
        } else {
            throw(std::out_of_range("Vector: out_of_range"));
        }
    }

    T* data() const {
        return m_buffer;
    }

    // modifiers
//    void push_back(const T& value);
//    void pop_back();
//    iterator insert(iterator pos, const T& value);
//    iterator erase(iterator pos);
//    iterator erase(iterator first, iterator last);
    void clear() {
        m_size = 0;
    }
    private:
    size_t m_size{0};
    size_t m_capacity{0};
    T* m_buffer{nullptr};
};
}
