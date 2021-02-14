// git commit -m "circleArea.cpp file PI constant literal added."
// Prints the area of circle
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, area;

    cout << "Please enter the radius of circle." << endl;
    cin >> radius;

    area = M_PI * radius * radius;      // M_PI is cmath function which contains the value of pi.

    cout << "The ares of circle with radius " << radius << " is " << area << endl;

    return 0; 
}