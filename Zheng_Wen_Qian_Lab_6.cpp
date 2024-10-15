/* Wen Qian Zheng, Jefferson Zheng
Lecture 5
October 15th, 2024*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    // Variables (Files, Integers, Characters, and Strings)
    ifstream inFile;
    ofstream outFile;
    int integer1, integer2;
    char character1;
    string string1;

     //Open Files as Variables
    inFile.open("inData.txt");
    outFile.open("outData.txt");
    
    //Outputs Values (Modified) to outData.txt
    inFile >> integer1 >> integer2 >> character1 >> string1;
    outFile << integer1 + integer2 << "\n" << char(int(character1) + 1) << "\n" << string1;

    //Closes Files
    inFile.close();
    outFile.close();

    //Exits Successfully
    return 0;
}


