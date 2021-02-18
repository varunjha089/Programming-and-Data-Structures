// converting to upper case 
#include <iostream>

using namespace std;

int main() {
    char lowerCaseLetter, upperCaseLetter;
    int offSet;

    cout << "Please enter a lower case letter:" << endl;
    cin >> lowerCaseLetter;

    offSet = (int)(lowerCaseLetter - 'a');
    upperCaseLetter = (char)('A' + offSet);

    cout << "The upper case of " << lowerCaseLetter << " is " << upperCaseLetter << "." << endl;

    return 0;
}