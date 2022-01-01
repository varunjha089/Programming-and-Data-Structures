#include <iostream>

using namespace std;

int main(){
    char user;

    cout << "Please Enter a Character" << endl;
    cin >> user;

    if (user >= 'a' && user <= 'z')
    {
        cout << user << " is a small letter." << endl;
    }
    else if (user >= 'A' && user <= 'Z')
    {
        cout << user << " is a capital letter." << endl;
    }
    else if (user >= '0' && user <= '9')
    {
        cout << user << " is a digit." << endl;
    }
    else
    {
        cout << user << " is not alpha-numeric." << endl;
    }
    
    return 0;
}