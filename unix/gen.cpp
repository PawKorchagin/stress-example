#include <iostream>
#include <random>

int main(int argc, char** argv) {

    int seed = 5;
    // seed = chrono::high_resolution_clock::now().time_since_epoch().count();

    if (argc > 1) {
        seed = std::stoi(argv[1]);
    }

    std::mt19937 rnd(seed);

    int a = rnd() % 200 + 1;
    int b = rnd() % 200 + 1;

    std::cout << a << " " << b << "\n";

    return 0;
}