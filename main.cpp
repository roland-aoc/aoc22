#include <iostream>

#include "02/rps.cpp" //why doesn't this compile with .h?

using namespace std;

int main(int, char**) {
    RPS i;
    cout << "test passed: " << (15 == i.play("C:\\Users\\R\\Desktop\\aoc22\\02\\inputTest"))   << "\n";
    cout << "test result: " << i.play("C:\\Users\\R\\Desktop\\aoc22\\02\\inputTest")   << "\n";
    cout << "puzzle answer: " <<          i.play("C:\\Users\\R\\Desktop\\aoc22\\02\\input")       << "\n";
    return 0;
}
