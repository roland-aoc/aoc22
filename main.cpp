#include <iostream>
#include <iostream>

#include "01/carrier.cpp"

using namespace std;

int main(int, char**) {
    Carrier i;
    cout << "test passed: " << (24000  == i.largestCarry("C:\\Users\\R\\Desktop\\aoc22\\01\\input01Test")) << "\n";
    cout << "puzzle answer: " <<          i.largestCarry("C:\\Users\\R\\Desktop\\aoc22\\01\\input01") << "\n";
    return 0;
}