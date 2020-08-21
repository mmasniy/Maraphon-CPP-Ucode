#pragma once
#include <algorithm>

template<typename T>
bool IsInRange(const T& val, const T& from, const T& to) {
    return (from <= val) && (val <= to);
}

template <typename T>
bool IsInRange(const T& val, const std::pair<const T&, const T&>& minmax) {
    return (minmax.first <= val) && (val <= minmax.second);
}

template<typename T>
bool IsInsideRange(const T& val, const T& from, const T& to) {
    return (from < val) && (val < to);
}

template <typename T>
bool IsInsideRange(const T& val, const std::pair<const T&, const T&>& minmax) {
    return (minmax.first < val) && (val < minmax.second);
}

template<class T, class U = T>
bool Modify(T& obj, U&& new_value) {
    if (obj == new_value) {
        return false;
    }
    else {
        obj = std::forward<T>(new_value);
        return true;
    }
}

//Проверил выше, ниже - нет!
//доделать
template <class Collection, class T>
void RemoveAll(Collection& c, const T& value) {
    std::remove(std::begin(c), std::end(c), value);
}
//доделать
template <class Collection, class Pred>
void RemoveAllIf(Collection& c, Pred&& predicate) {
    std::remove_if(std::begin(c), std::end(c), predicate);
}

template <class Collection, class T>
auto Find(Collection& c, const T& value) {
    return std::find(begin(c), end(c), value);
}

template <class Collection, class Pred>
auto FindIf(Collection& c, Pred&& predicate) {
    return std::find_if(begin(c), end(c), predicate);
}

template <class Collection, class T>
bool Contains(const Collection& c, const T& value) {
    if (std::find(begin(c), end(c), value) != end(c)) {
        return true;
    }
    return false;
}

template <class Collection, class Pred>
bool ContainsIf(const Collection& c, Pred&& predicate) {
    if (std::find(begin(c), end(c), predicate) != end(c)) {
        return true;
    }
    return false;
}

template <class Collection, class Pred>
int CountIf(const Collection& c, Pred&& predicate) {
    return std::count_if(begin(c), end(c), predicate);
}

template <class T, class... Args>
const auto& Min(const T& arg, const Args&... args) {
    std::vector<T> element{arg, args...};
    return *std::min_element(element.begin(), element.end());
}

template <class T, class... Args>
const auto& Max(const T& arg, const Args&... args) {
    std::vector<T> element{arg, args...};
    return *std::max_element(element.begin(), element.end());
}

template <class Collection>
auto MaxElement(const Collection& c) {
    return std::max_element(begin(c), end(c));
}

template <class Collection>
auto MinElement(const Collection& c) {
    return std::min_element(begin(c), end(c));
}

template <class Collection, class Comp>
auto MaxElement(const Collection& c, Comp&& comparator) {
    return std::max_element(begin(c), end(c), comparator);
}

template <class Collection, class Comp>
auto MinElement(const Collection& c, Comp&& comparator) {
    return std::min_element(begin(c), end(c), comparator);
}

template <class Collection>
void Sort(Collection& c) {
    std::sort(begin(c), end(c));
}

template <class Collection, class Comp>
void Sort(Collection& c, Comp&& comparator) {
    std::sort(begin(c), end(c), comparator);
}
//доделать
template <class Collection>
void Unique(Collection& c) {
    std::unique(begin(c), end(c));
}
//доделать
template <class Collection, class Pred>
void Unique(Collection& c, Pred&& predicate) {
    std::unique(begin(c), end(c), predicate);
}

template <class Collection, class Pred>
void ForEach(Collection& c, Pred&& predicate) {
    std::for_each(begin(c), end(c), predicate);
}

template <class Collection, class T>
int IndexOf(const Collection& c, const T& value) {
    int index = (std::find(begin(c), end(c), value) - begin(c));
    if (index == std::size(c)) {
        return -1;
    }
    return index;
}

template <class Collection, class Pred>
int IndexOfIf(const Collection& c, Pred&& predicate) {
    int index = (FindIf(c, predicate) - begin(c));
    if (index == std::size(c)) {
        return -1;
    }
    return index;
}
