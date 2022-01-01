// Checking for leap year
#include <iostream>
#include <string>

using namespace std;

int main ( int argc, char** argv ){
    // Converting char input into int using stoi.
    int year = stoi(argv[1]);
    // cout << year << endl;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0){
                cout << year << " was a leap year" << endl;
            }
            else{
                cout << year << " was not a leap year" << endl;
            }
        }
        else{
            cout << year << " was a leap year" << endl;
        }
    }
    else{
        cout << year << " was not a leap year" << endl;
    }


    return 0;
}