// This C++ program will prints ASCII vlue of characters.
#include <iostream>

using namespace std;

int main(){
    char inputChar;
    int asciiValue;

    int br;
    br = 1;

    while(br != 0){
        cout << "Please, enter a character value." << endl;
        cin >> inputChar;

        asciiValue = (int)inputChar;

        cout << "The ASCII value of character " << inputChar << " is " << asciiValue << endl;
        
        cout << "Do you want to continue. Press 1 " << endl;
        cout << "If you want to exit, Press 0" << endl;
        cin >> br;
    }
    return 0;
}