#include <iostream>

int main() {
    system("g++ -std=c++17 a.cpp -o stupid");
    system("g++ -std=c++17 b.cpp -o main");
    system("g++ -std=c++17 gen.cpp -o gen");

    char gen_exe[100];

    for (int i = 0; i < 100; ++i) {
        std::snprintf(gen_exe, sizeof(gen_exe), "./gen %d > input.txt", i);
        system(gen_exe);
        system("./stupid < input.txt > stupid_output.txt");
        system("./main < input.txt > output.txt");


        if (system("diff stupid_output.txt output.txt")) {
            std::cerr << "WA\n";
            return 0;
        }

        std::cerr << ".\n";
    }
}