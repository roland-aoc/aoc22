#include <fstream>

#include "rps.h"

RPS::RPS(/* args */)
{
}

RPS::~RPS()
{
}

int RPS::play(string strategyPath) {
    auto l = [this] (string me, string elf) {if (me == " ") return 0; 
        if (me == elf) 
            return 3 + valueLookup(&me);
        if ((me == "A" || me == "X") && (elf == "C" || elf == "Z"))
            return 6 + valueLookup(&me);
        if ((me == "B" || me == "Y") && (elf == "A" || elf == "X"))
            return 6 + valueLookup(&me);
        if ((me == "C" || me == "Z") && (elf == "Y" || elf == "B"))
            return 6  + valueLookup(&me);
        return 0 + valueLookup(&me);
    };
    return processLines(strategyPath, l);
}

int RPS::processLines(string path, function<int(string me, string elf)> f) {
    string line;
    ifstream inputFile (path);
    int score = 0;
    if (inputFile.is_open()) {
        while (getline(inputFile, line))
            score += f( line.substr(0, line.find(" ")), 
                        line.substr(1, line.find(" ")) );
    }
    inputFile.close();
    return score;
}

int RPS::valueLookup(const string *position) {
    if ("X" == *position || "A" == *position) return 1; //Rock
    if ("Y" == *position || "B" == *position) return 2; //Paper
    if ("Z" == *position || "C" == *position) return 3; //Scissors
    return 0;
}