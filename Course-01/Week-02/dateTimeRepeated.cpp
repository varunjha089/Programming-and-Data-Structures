// No of Weeks and Days in given no of days.

#include<iostream>

using namespace std;

int main(){
    int givenDays;              // total no of days
    int weeks;                  // No of weeks in given days
    int days;                   // No. of days remaining after weeks calculated

    int br;
    br = 1;

    while(br == 1){
        cout << "Please enter the no of days." << endl;
        cin >> givenDays;

        weeks = givenDays / 7;      // '/' returns quotient, which will be the no. of weeks.
        days = givenDays % 7;       // '%' returns remainder, which will be the no. of days. 

        cout << "In " << givenDays << " days, there will be " << weeks << " week and " << days << " days." << endl;    

        cout << "Do you want to continue. Press 1 " << endl;
        cout << "If you want to exit, Press 0" << endl;
        cin >> br;
    }
    

    return 0;
}