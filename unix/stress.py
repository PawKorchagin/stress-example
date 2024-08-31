from os import system

system("g++ -std=c++17 a.cpp -o stupid")
system("g++ -std=c++17 b.cpp -o main")
system("g++ -std=c++17 gen.cpp -o gen")

for i in range(100):
    system(f"./gen {i} > input.txt")
    system("./stupid < input.txt > stupid_output.txt")
    system("./main < input.txt > output.txt")

    if (system("diff output.txt stupid_output.txt")):
        print('WA')
        exit(0)
    print('.')