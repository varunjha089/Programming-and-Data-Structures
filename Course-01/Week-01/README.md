# Week 01

In this week we just read about basics of C++.

```cpp
// This program reads input from user and prints their sum

#include <iostream>

using namespace std;

int main()
{
    int numOne;     // will hold first input
    int numTwo;     // will hold second input
    int sum;        // will hold the sum

    // asking for input
    cout << "Please enter two number separated by space" << endl;
    
    // Getting input using cin.
    cin >> numOne >> numTwo;

    // adding two number
    sum = numOne + numTwo;

    // printing the output
    cout << numOne << " + " << numTwo << " = " << sum << endl;

    return 0;
}
```

## Points to remember 

1. C++ program ends with a **semi-colon** `;`.

2. **`cout`** used to print something.

3. **`cin`** used to take input.

4. To declare a variable, we must provide data type first followed by variable-name.
    - int numOne;

5. Every C++ program starts with **`an include directive`** 
    - #include < iostream >

### Grades

- Quizes:-  
    - 9/9 (100%)
- Lab :- Hello World Lab
    - 2.0 / 2.0

### Some Resources

- [C++ Introduction](https://www.w3schools.com/cpp/cpp_intro.asp)

- [C++ Getting Started](https://www.w3schools.com/cpp/cpp_getstarted.asp)

- [C++ Syntax](https://www.w3schools.com/cpp/cpp_syntax.asp)

- [C++ Output](https://www.w3schools.com/cpp/cpp_output.asp)

- [C++ Command Line](http://www.cplusplus.com/articles/DEN36Up4/)


### Lab Files

You can find [Hello World Lab](/Course-01/Week-01/hello_world_lab.cpp) contains solution to hello world lab.
