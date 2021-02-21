// This program reads a positive integer n, and prints the first n even numbers.
#include <iostream>

using namespace std;

int main(){
    int input, output;

    cout << "Please enter a positive integer: ";
    cin >> input;

    for(output = 1; output <= input; output++){
        cout << output * 2 << endl;
    }
    
    return 0;
}