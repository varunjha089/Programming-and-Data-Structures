// Calculating BMI, when weight and height are entered.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Please enter weight in pounds: ";
    cin >> weight;

    cout << "Please enter height in inches: ";
    cin >> height;
    height = height * 0.0254;
    weight = weight * 0.453592;
    bmi = weight / pow(height, 2);
    cout << fixed;
    cout << setprecision(2);

    cout << "BMI is: " << bmi << endl;

    // printf("BMI is: %.2f", bmi);
    // cout << endl;
    
    return 0;
}