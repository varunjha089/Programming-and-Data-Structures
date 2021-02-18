// In this program we learned about conditional in C++
#include <iostream>

using namespace std;

int main() {
    int gradeOne, gradeTwo;

    cout << "Please enter 2 grades, separated by a space: ";
    cin >> gradeOne;
    cin >> gradeTwo;

    if (gradeOne < 60 && gradeTwo < 60){
        cout << "Student Failed:(" << endl;
    }
    else if (gradeOne >= 95 && gradeTwo >= 95){
        cout << "Student Graduated with Honors:)" << endl;
    }
    else{
        cout << "Student Graduated!" << endl;
    }
    
    return 0;
}