#include <iostream>
#include <cassert>

int main() {
    int a, b;
    assert(std::cin >> a >> b);

    if (a > 100) std::cout << -1 << "\n";
    else std::cout << a + b << "\n";
}
