#include <iostream>

using namespace std;

int main(){
    int n, counter;
    
    cout << "Please enter a number: ";
    cin >> n;

    counter = 1;
    while (counter <= n)
    {
        cout << counter << endl;
        counter++;
    }

    return 0;
    
}