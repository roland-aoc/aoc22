#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <vector>

using namespace std;

class Parser {
private:
    /* data */
public:
    Parser(/* args */);
    ~Parser();
    vector<int> readLines(string);
};

#endif