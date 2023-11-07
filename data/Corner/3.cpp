/*
Time: 2023-10-20
Test: Copy constructor and assignment operator. Operator +,-.
std Time: 0.00s
Time Limit: 1.00s
Notes: Sanity check.
*/

#include "int2048.h"

void sanity_check(sjtu::int2048 &x) {
    x = x = x = x = x = x = x = x = x;
    sjtu::int2048 y = (((((((((((((x)))))))))))));
    sjtu::int2048 z = (((((((-(((((x))))))))))));
    x = ( x = (x = (x = y + z + x)));
}

signed main() {
    sjtu::int2048 x {"111111111111111111111111111111111111111111111111111111111111111111111111112"};
    sanity_check(x);
    std::cout << +(+(+(+x))) << '\n';
    std::cout << - - -sjtu::int2048{0} << '\n';
    x.read("-0");
    std::cout << x << '\n';
    std::cout << (sjtu::int2048{0} == -sjtu::int2048{0}) << '\n';
    return 0;
}
