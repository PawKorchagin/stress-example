#include <iostream>
#include <cassert>

int main() {
    freopen("C:\\Path\\To\\Here\\input.txt", "r", stdin);
    freopen("C:\\Path\\To\\Here\\output.txt", "w", stdout);

    int a, b;
    assert(std::cin >> a >> b);

    if (a > 100) std::cout << -1 << "\n";
    else std::cout << a + b << "\n";
}
