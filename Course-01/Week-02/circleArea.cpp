// Prints the area of circle
#include <iostream>

using namespace std;

int main() {
    double radius, area;

    cout << "Please enter the radius of circle." << endl;
    cin >> radius;

    area = 3.14 * radius * radius;

    cout << "The ares of circle with radius " << radius << " is " << area << endl;

    return 0; 
}