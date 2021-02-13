// This program reads input from user and prints their sum

#include <iostream>

using namespace std;

int main()
{
    int numOne;     // will hold first input
    int numTwo;     // will hold second input
    int sum;        // will hold the sum

    // asking for input
    cout << "Please enter two number separated by space" << endl;
    
    // Getting input using cin.
    cin >> numOne >> numTwo;

    // adding two number
    sum = numOne + numTwo;

    // printing the output
    cout << numOne << " + " << numTwo << " = " << sum << endl;

    return 0;
}