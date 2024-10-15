/* Wen Qian Zheng, Jefferson Zheng
Lecture 5
October 7th, 2024*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    ifstream inFile;
    ofstream outFile;
    int integer1, integer2;
    char character1;
    string string1;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    inFile >> integer1 >> integer2 >> character1 >> string1;
    outFile << integer1 + integer2 << "\n" << int(character1) + 1 << "\n" << string1;

    inFile.close();
    outFile.close();

    return 0;
}
