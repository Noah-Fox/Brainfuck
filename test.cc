#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

struct State{
    string name;
    int val;
};

int main(int argc, char const *argv[]){
    
    ifstream inFile;
    /*inFile.open("input.txt");

    //placing each letter of a word into a left_stack
    //"< 10's place < 1's place" for each letter ... "<<" at end of word 
    string commands = "<+<<<\n";//begin with newline

    string wordGathered = "";

    while (!inFile.eof()){
        int gotChar = inFile.get();
        if (gotChar != 10){
            char letter = gotChar;
            wordGathered += letter;
            int tenDigit = gotChar/10;
            int oneDigit = gotChar - 10*tenDigit;
            commands += "<";
            for (int i = 0; i < tenDigit; i ++){
                commands += "+";
            }
            commands += "<";
            for (int i = 0; i < oneDigit; i ++){
                commands += "+";
            }
        }else{
            if (wordGathered == " "){
                wordGathered = "\" \"";
            }
            if (wordGathered == ","){
                wordGathered = ";";
            }
            if (wordGathered == "."){
                wordGathered = ":";
            }

            commands += "<<\t//";
            commands += wordGathered;
            commands += "\n";
            wordGathered = "";
        }
    }

    commands += "\t//" + wordGathered;

    cout << commands << endl;*/


    inFile.open("testCode.txt");
    int gotNum;
    string commands = "";
    while (!inFile.eof()){
        if (isdigit(inFile.peek())){
            inFile >> gotNum;

            int tenVal = gotNum/10;
            int oneVal = gotNum - 10*tenVal;

            commands += "<";
            for (int i = 0; i < oneVal; i ++){
                commands += "+";
            }
            commands += "<";
            for (int i = 0; i < tenVal; i ++){
                commands += "+";
            }
            if (gotNum == 2){
                commands += "\n";
            }
        }else{
            inFile.ignore();
        }
    }
    cout << commands << endl;

    inFile.close();
    return 0;
}