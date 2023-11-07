/*
Time: 2023-10-27
Test: Operator +, -, *, /, %.
std Time: 0.10s
Time Limit: 1.00s
Notes: Sanity check.
*/

#include "int2048.h"
#include <cstdint>

using sjtu::int2048;


void test_self() {
    int2048 x {1ll};

    // pow(2,1000)
    for(int i = 0 ; i < 1000 ; ++i) { x += x; x -= -x; }
    std::cout << x << '\n';


    x -= x;
    x += 2ll;

    // pow(2,pow(2,...))
    for(int i = 0 ; i < 11 ; ++i) { x *= x; x /= (x / x); }
    std::cout << x << '\n';

    // 200!
    x = 1ll;
    for(int i = 1 ; i < 300 ; ++i) { x *= i; x *= (x / x); }
    std::cout << x << '\n';

    // 0 0 0 0
    std::cout
        << x % -1 << ' ' << -x % -1 << ' '
        << -x % 1  << ' ' << x % -1 << '\n';

}


signed main() {
    test_self();
    return 0;
}
