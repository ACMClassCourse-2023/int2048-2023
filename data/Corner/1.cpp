/*
Time: 2023-10-20
Test: Custom constructor. Div and mod.
std Time: 0.00s
Time Limit: 1.00s
Notes: Sanity check.
*/

#include "int2048.h"

void sanity_check(sjtu::int2048 &x,sjtu::int2048 &y) {
    // Sanity check of division
    std::cout
        << x / y    << ' '
        << -x / y   << ' '
        << x / -y   << ' '
        << -x / -y  << '\n';

    // Sanity check of mod
    std::cout
        << x % y    << ' '
        << -x % y   << ' '
        << x % -y   << ' '
        << -x % -y  << '\n';
}

signed main() {
    sjtu::int2048 x {"0000000000001145141919810"};
    sjtu::int2048 y {"-1145141919810"};

    y += 1;
    sanity_check(x, y);

    y += -2;
    y -= -1;

    sanity_check(x, y);

    return 0;
}
