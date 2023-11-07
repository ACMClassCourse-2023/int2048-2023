/*
Time: 2023-10-27
Test: Operator -, ==. Stream.
std Time: 0.00s
Time Limit: 1.00s
Notes: Sanity check.
*/

#include "int2048.h"
#include <cstdint>
#include <sstream>

using sjtu::int2048;


void test_stream() {
    std::istringstream iss {
        "1234567890123456789012345678991234567890 "
        "-1234567890123456789012345678901234567890"
    };
    std::ostringstream oss {};
    int2048 a,b;
    iss >> a >> b;
    oss << a - (-b);
    std::cout << oss.str().size() << ' ' << oss.str() << '\n';
    std::cout << (-int2048(0) != 0) << '\n';
}

signed main() {
    test_stream();
    return 0;
}
