#include <iostream>

int main() {
    system("g++ -std=c++17 a.cpp -o stupid");
    system("g++ -std=c++17 b.cpp -o main");
    system("g++ -std=c++17 gen.cpp -o gen");

    char gen_exe[100];

    for (int i = 0; i < 100; ++i) {
        sprintf(gen_exe, "gen.exe %d", i);
        system(gen_exe);
        system("stupid.exe");
        system("main.exe");

        if (system("fc stupid_output.txt output.txt")) {
            std::cerr << "WA\n";
            return 0;
        }

        std::cerr << ".\n";
    }
}