#include <iostream>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

#include "carrier.h"


Carrier::Carrier(/* args */)
{
}

Carrier::~Carrier()
{
}

int Carrier::largestCarry(string path) {
    string line;
    ifstream inputFile (path);
    auto caloriesV = vector<int>();
    if (inputFile.is_open()) {
        int i = 0, calories;
        while (getline(inputFile, line))
        {
            if (line != "") {
                calories += static_cast<int>(stoi(line));
            } else {
                caloriesV.push_back(calories);
                calories = 0;
            }
        }

    }
    inputFile.close();
    return *max_element(caloriesV.begin(), caloriesV.end());
}


