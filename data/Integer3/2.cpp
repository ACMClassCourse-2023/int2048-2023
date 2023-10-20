/*
Time: 2023-10-20
Test: Custom constructor. Div and mod.
std Time: 0.00s
Time Limit: 1.00s
Notes: Sanity check.
*/

#include "int2048.h"

void sanity_check(sjtu::int2048 &x) {
    (0 / x).print(); std::cout << ' ';
    (1 / x).print(); std::cout << ' ';
    (-1 / x).print();std::cout << ' ';

    (0 % x).print(); std::cout << ' ';
    (1 % x).print(); std::cout << ' ';
    (-1 % x).print();std::cout << '\n';
}

signed main() {
    sjtu::int2048 x;

    x.read("-1919810");
    sanity_check(x);

    x = -x;
    sanity_check(x);
    return 0;
}
