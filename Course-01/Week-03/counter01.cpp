// Coin Counter 
#include <iostream>

using namespace std;

const float PENNIES = 0.01;
const float NICKEL = 0.05;
const float DIME = 0.1;
const float QUARTER = 0.25;

int main(){
    int total;
    int dollars, cents, pennies, nickel, dime, quarter;

    cout << "# of quarters: ";
    cin >> quarter;

    cout << "# of dimes: ";
    cin >> dime;

    cout << "# of nickels: ";
    cin >> nickel;

    cout << "# of pennies: ";
    cin >> pennies;

    total = (quarter * QUARTER + dime * DIME + nickel * NICKEL + pennies * PENNIES) * 100;
    dollars = total / 100;
    cents = total % 100;

    cout << "the total is "<< dollars << " dollars and " << cents <<" cents" << endl;
    return 0;
}