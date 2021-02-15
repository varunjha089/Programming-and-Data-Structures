// Coins Converter 
#include <iostream>

using namespace std;

// const float PENNIES = 0.01;
// const float NICKEL = 0.05;
// const float DIME = 0.1;
// const float QUARTER = 0.25;

int main() {
    int total;
    int dollars, cents, nickel, dime, quarter;

    cout << "# of dollars: ";
    cin >> dollars;

    cout << "# of cents: ";
    cin >> cents;

    total = dollars * 100 + cents;          // total amount in cents.

    // Calculating for quarter's
    quarter = total / 25;
    total = total % 25;

    // Calculating for dime's
    dime = total / 10;
    total = total % 10;

    // Calculating for nickels 
    nickel = total / 5;
    total = total % 5;

    // Pennies ramaining will be total

    // cout << "quarter " << quarter << endl;
    // cout << "dime " << dime << endl;
    // cout << "nickels " << nickel << endl;
    // cout << "pennies " << total << endl;
    // cout << total << endl;
    
    cout << "The coins are " << quarter << " quarters, " << dime;
    cout << " dimes, " << nickel << " nickels and " << total << " pennies" << endl;
    return 0;
}