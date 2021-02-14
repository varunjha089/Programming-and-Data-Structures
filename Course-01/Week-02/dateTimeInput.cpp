// No of Weeks and Days in given no of days.

#include<iostream>

using namespace std;

const int DAYS_IN_WEEK = 7;

int main(){
    int givenDays;              // total no of days
    int weeks;                  // No of weeks in given days
    int days;                   // No. of days remaining after weeks calculated

    cout << "Please enter the no of days." << endl;
    cin >> givenDays;

    weeks = givenDays / DAYS_IN_WEEK;      // '/' returns quotient, which will be the no. of weeks.
    days = givenDays % DAYS_IN_WEEK;       // '%' returns remainder, which will be the no. of days. 

    cout << "In " << givenDays << " days, there will be " << weeks << " week and " << days << " days." << endl;

    return 0;
}