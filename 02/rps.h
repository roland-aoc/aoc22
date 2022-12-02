#ifndef RPS_H
#define RPS_H

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class RPS {
    int processLines(string, function<int(string me, string elf)> f);
    int score(string, string);
    int valueLookup(const string *);
public:
    RPS(/* args */);
    ~RPS();
    int play(std::string);
};

#endif