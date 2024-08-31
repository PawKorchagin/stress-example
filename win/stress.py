from os import system

system("g++ -std=c++17 a.cpp -o stupid")
system("g++ -std=c++17 b.cpp -o main")
system("g++ -std=c++17 gen.cpp -o gen")

for i in range(1000):
    system(f"gen.exe {i}")
    system("stupid.exe")
    system("main.exe")

    if (system("fc output.txt stupid_output.txt")):
        print('WA')
        exit(0)
    print('.')