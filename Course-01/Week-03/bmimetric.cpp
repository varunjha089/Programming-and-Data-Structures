// Calculating BMI, when weight and height are entered.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Please enter weight in kilograms: ";
    cin >> weight;

    cout << "Please enter height in meters: ";
    cin >> height;

    bmi = weight / pow(height, 2);

    printf("BMI is: %.2f", bmi);
    cout << endl;
    
    return 0;
}