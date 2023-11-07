/*
Time: 2023-10-27
Test: Constructor from integer. Operators.
std Time: 0.00s
Time Limit: 1.00s
Notes: Sanity check.
*/

#include "int2048.h"
#include <cstdint>

using sjtu::int2048;

void test_corner() {
    std::string s1 { '-' };
    int2048 a = 1;
    for(int i = 0 ; i < 100 ; ++i) {
        s1.push_back('9');
        a.read(s1);
        a += -int2048(1);
        std::cout << -a << ' ';

        a += -int2048(0);
        a -= -int2048(0);
        a += -int2048(1);
        a += +int2048(0);
        a -= +int2048(0);
        a -= -int2048(1);

        a += 1u;
        a -= 1u;
        a += 1ll;
        a -= 1ll;

        a += int16_t(1);
        a -= int16_t(1);
        a += uint16_t(2);
        a -= uint16_t(2);

        a *= 1ll;
        a /= 1ll;

        std::cout << a << '\n';
    }
}

signed main() {
    test_corner(); // For fun LOL
    return 0;
}