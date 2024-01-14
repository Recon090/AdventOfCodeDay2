#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "functions.cpp"
using namespace std;
bool gamePossible(ifstream& inFile);
const int REDCUBE = 12, GREENCUBE = 13, BLUECUBE = 14;
int main() {
	int calibrationVal;
	std::ifstream inFile("inputTest.txt");
	if (!inFile.is_open()) {
		std::cout << "File could not open, exiting code";
		exit(0);
	}

	return 0;
}


bool gamePossible(ifstream& inFile) {
	string gameCount;
	vector<char> line;
	while (getline(inFile, gameCount)) {
		line = getVector(gameCount);

	}
	
}