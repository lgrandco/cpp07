#include "iter.hpp"

int I_print_ints_and_return_int(int n) {
    std::cout << get_color() << n << ANSI_RESET << std::endl;
    return 0;
}

void I_print_floats(float n) { std::cout << get_color() << n << ANSI_RESET << std::endl; }

int main(void) {
    float float_arr[4] = {1.1, 2.2, 3.3, 4.4};
    iter(float_arr, 4, I_print_floats);
    int int_arr[4] = {1, 2, 3, 4};
    iter(int_arr, 4, I_print_ints_and_return_int);
}
