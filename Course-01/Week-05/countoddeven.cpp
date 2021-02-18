#include <iostream>

using namespace std;

int main() {
    int one, two, three, four, even=0, odd=0;

    cout << "Please enter 4 positive integers, separated by a space: ";
    cin >> one >> two >> three >> four;

    if (one % 2 == 0){
        even += 1;
    }else{
        odd += 1;
    }

    if (two % 2 == 0){
        even += 1;
    }else{
        odd += 1;
    }

    if (three % 2 == 0){
        even += 1;
    }else{
        odd += 1;
    }

    if (four % 2 == 0){
        even += 1;
    }else{
        odd += 1;
    }

    // Checking for which is mord.
    if (odd > even){
        cout << "more odds" << endl;
    }
    else if(even > odd){
        cout << "more evens" << endl;
    }
    else{
        cout << "same number of evens and odds" << endl;
    }

    return 0;
}