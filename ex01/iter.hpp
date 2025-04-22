#ifndef ITER_HPP
#define ITER_HPP
#include "colors.hpp"

template <typename T, typename F>
void iter(T* array, std::size_t n, F f) {
    for (std::size_t i = 0; i < n; i++) f(array[i]);
}

#endif // !ITER_HPP
