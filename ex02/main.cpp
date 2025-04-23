#include "Array.hpp"

int main(void) {
    Array<> a(10);
    a[0] = 42;
    a[9] = 41;
    Array<> b(a);
    b[1] = 50;
    a[1] = 60;
    Array<> c(b);
    c[2] = 33;
    b[2] = -10;
    Array<> d;
    std::cout << get_color() << "The size of my array is " << c.size() << std::endl;
    for (int i = -13; i < 11; i++) try {
            std::cout << get_color() << i << ": " << c[i] << ANSI_RESET << std::endl;
        } catch (std::exception& e) { print_color(e.what(), std::cerr); }
}
