// This program wil print fibonacci number
#include <iostream>

using namespace std;

int main(){
    int firstFib, input, output, next;

    firstFib = 1;
    next = 1;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> input;

    for (int i = 1; i <= input; i++) {
        if (i == 1){
            cout << firstFib << endl;
            continue;
        }

        if (i == 2){
            cout << next << endl;
            continue;
        }
        output = firstFib + next;
        firstFib = next;
        next = output;

        cout << output << endl;
    }

    return 0;
}
