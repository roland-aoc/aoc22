#ifndef CARRIER_H
#define CARRIER_H

#include <algorithm>
#include <string>

#include "../parser.h"

class Carrier {
private:
    Parser parser;
public:
    Carrier(/* args */);
    ~Carrier();
    int largestCarry(string);
    int top3(string);
    void sumCarry(vector<int>& carry, string path);
};

#endif