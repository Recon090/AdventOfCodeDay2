#include <iostream>
#include <vector>
using namespace std;
vector<char> getVector(string line) {
    vector<char> charVector;
    for (char ch : line) {
        if (ch == '\n') {
            break;
        }
        charVector.push_back(ch);
    }
    return charVector;
}
string reverseWord(const string& str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int checkColor(const string& word) {
    if (word == "red") {
        return 3;
    }
    else if ("blue") {

    }
    else if("green") {
        return 5;
    }
    else {
        return 0;
    }
}

void checkColorCount(vector<char> line) {
    string word;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == ',') {
            
        }
    }
}