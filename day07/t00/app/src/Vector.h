#pragma once
#include <iostream>
namespace CSL {
template <class T>
class Vector {
    public:
    using iterator = T*;

    Vector() : Vector(0) {
    }
    explicit Vector(size_t size) : m_size(size), m_capacity(size) {
            m_buffer = new T[size];
    }
    Vector(iterator first, iterator last)
        : m_size(last - first), m_capacity(last - first) {
        m_buffer = new T[last - first];
    }
    Vector(const std::initializer_list<T>& lst) : m_size(lst.size()), m_capacity(lst.size()) {
        m_buffer = new T[lst.size()];
        auto &iter = m_buffer;
        for (auto it = lst.begin(); it != lst.end(); ++it, ++iter) {
            iter = *it;
        }
    }
    Vector(const Vector<T>& other) : m_size(other.size()), m_capacity(other.size()){
        m_buffer = new T[other.size()];
        auto &iter = m_buffer;
        for (auto& o : other) {
            iter = o;
            ++iter;
        }
    }
    ~Vector() {
        delete[] m_buffer;
    }

    Vector<T>& operator=(const Vector<T>& other);
    bool operator==(const Vector<T>& other) const;
    bool operator!=(const Vector<T>& other) const;
    bool operator<(const Vector<T>& other) const;
    bool operator>(const Vector<T>& other) const;
    bool operator<=(const Vector<T>& other) const;
    bool operator>=(const Vector<T>& other) const;

    //iterators
    iterator begin() const;
    iterator end() const;

    //capacity
    size_t size() const;
    size_t capacity() const;
    bool isEmpty() const;
    void resize(size_t size, const T& value= T());
    void reserve(size_t size);

    //element access
    T& operator[](size_t index) const;
    T& at(size_t index) const;
    T* data() const;

    // modifiers
    void push_back(const T& value);
    void pop_back();
    iterator insert(iterator pos, const T& value);
    iterator erase(iterator pos);
    iterator erase(iterator first, iterator last);
    void clear();
    private:
    size_t m_size{0};
    size_t m_capacity{0};
    T* m_buffer{nullptr};
};
}
