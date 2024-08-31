#include <iostream>
#include <cassert>

int main() {
    freopen("C:\\Path\\To\\Here\\input.txt", "r", stdin);
    freopen("C:\\Path\\To\\Here\\stupid_output.txt", "w", stdout);

    int a, b;
    assert(std::cin >> a >> b);

    std::cout << a + b << "\n";
}