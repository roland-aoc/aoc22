#include <iostream>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#include "carrier.h"


Carrier::Carrier(/* args */)
{
}

Carrier::~Carrier()
{
}

int Carrier::largestCarry(string path) {
    auto carry = vector<int> (); 
    sumCarry(carry, path);
    return *max_element(carry.begin(), carry.end());
}

int Carrier::top3(string path) {
    auto carry = vector<int> (); 
    sumCarry(carry, path);
    sort(carry.begin(), carry.end(), greater<>());
    return accumulate(carry.begin(), carry.begin()+3, 0, plus<>());
}

void Carrier::sumCarry(vector<int>& carry, string path) {
    string line;
    ifstream inputFile (path);
    if (inputFile.is_open()) {
        int i = 0, calories;
        while (getline(inputFile, line))
        {
            if (line != "") {
                calories += stoi(line);
            } else {
                carry.push_back(calories);
                calories = 0;
            }
        }
    }
    inputFile.close();
}