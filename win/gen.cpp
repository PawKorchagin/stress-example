#include <iostream>
#include <random>
#include <chrono>

int main(int argc, char** argv) {
    freopen("C:\\Path\\To\\Here\\input.txt", "w", stdout);

    int seed = 5;
    // seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();

    if (argc > 1) {
        seed = std::stoi(argv[1]);
    }

    std::mt19937 rnd(seed);

    int a = rnd() % 200 + 1;
    int b = rnd() % 200 + 1;

    std::cout << a << " " << b << "\n";

    return 0;
}