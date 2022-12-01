#include <fstream>
#include <algorithm>

#include "parser.h"

using namespace std;

Parser::Parser(/* args */)
{
}

Parser::~Parser()
{
}

vector<int> Parser::readLines(string path) {    
  ifstream dataFile(path);
  istream_iterator<int> dataBegin(dataFile);
  istream_iterator<int> dataEnd;
  return vector<int>(dataBegin, dataEnd);
}