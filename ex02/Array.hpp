#ifndef ARRAY_HPP
#define ARRAY_HPP
#include "colors.hpp"

template <typename T = float>
class Array {
private:
    unsigned int _size;
    T* arr;

public:
    Array() : _size(0), arr(new T[0]) {}

    Array(unsigned int n) : _size(n), arr(new T[n]) {
        for (unsigned int i = 0; i < n; i++) arr[i] = -1;
    }

    ~Array() { delete[] arr; }

    Array(Array& src) : _size(src._size) {
        arr = new T[src._size];
        for (unsigned int i = 0; i < src._size; i++) { arr[i] = src[i]; }
    }

    Array& operator=(Array& src) {
        _size = src._size;
        arr = new T[src._size];
        for (unsigned int i = 0; i < src._size; i++) { arr[i] = src[i]; }
        return *this;
    }

    T& operator[](int n) {
        if (n >= static_cast<int>(_size)) throw std::out_of_range("Index out of bounds");
        n = ((n % static_cast<int>(_size)) + static_cast<int>(_size)) % static_cast<int>(_size);
        return arr[n];
    }
    const T& operator[](int n) const {
        if (n >= static_cast<int>(_size)) throw std::out_of_range("Index out of bounds");
        n = ((n % static_cast<int>(_size)) + static_cast<int>(_size)) % static_cast<int>(_size);
        return arr[n];
    }

    unsigned int size() { return _size; };
    unsigned int size() const { return _size; };
};
#endif // !ARRAY_HPP
