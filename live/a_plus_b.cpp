#include <iostream>
#include <cassert>
#include <random>

int stupid(int a, int b) {
    return a + b;
}

int solve(int a, int b) {
    if (a > 200) {
        return -1;
    } else {
        return a + b;
    }
}

int main(int argc, char** argv) {
    std::mt19937 rnd(5);

    for (int _ = 0; _ < 1e5; ++_) {
        int a = rnd() % 300 + 1, b = rnd() % 300 + 1; // [1, 300]
        int stupid_res = stupid(a, b);
        int solve_res = solve(a, b);

        if (stupid_res != solve_res) {
            std::cout << "WA\n";
            std::cout << "input: " << a << " " << b << "\n";
            std::cout << "stupid output: " << stupid_res << "\n";
            std::cout << "output: " << solve_res << "\n";
            return 0;
        }
        std::cout << ".\n";
    }

    std::cout << "OK\n";
}