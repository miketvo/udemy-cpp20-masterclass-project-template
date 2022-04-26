#include <iostream>

int main() {
    auto result = (10 <=> 20) > 0;  // This line would work if we're using C++20 and above
    std::cout << result << std::endl;  // 0
    return 0;
}
