// Prints the area of circle
#include <iostream>

using namespace std;

const double PI=3.1486;

int main() {
    double radius, area;

    cout << "Please enter the radius of circle." << endl;
    cin >> radius;

    area = PI * radius * radius;

    cout << "The ares of circle with radius " << radius << " is " << area << endl;

    return 0; 
}