/*
Time: 2023-10-27
Test: Constructor from integer. Operator +=, +.
std Time: 0.00s
Time Limit: 1.00s
Notes: Sanity check.
*/

#include "int2048.h"
#include <cstdint>

using sjtu::int2048;

template <class T>
int2048 test_init(T x) {
    int2048 a { x };
    a = x;
    a = x + a;
    a += x;
    return -a;
}

void test_init() {
    auto x = test_init(int8_t(1)) + test_init(int16_t(2))
    + test_init(int32_t(3)) + test_init(int64_t(4));
    auto y = test_init(uint8_t(1)) + test_init(uint16_t(2))
    + test_init(uint32_t(3)) + test_init(uint32_t(4));
    std::cout << -x << ' ' << -y << '\n';
}

signed main() {
    // Testing the ctor of every int type.
    test_init();
    return 0;
}
