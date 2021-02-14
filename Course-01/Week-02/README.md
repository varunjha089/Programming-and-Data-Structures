# Week 02

In this week we learn about **`Data Types and Expression`** in **C++**.

## Points to Remember

- **`char`** data type uses **1** bytes.

- **`int`**, **`float`** data type uses **4** bytes.

- **`double`** data type uses **8** bytes.

- **`long double`** data type uses **10** bytes.

- The numbar are represented by **`Floating Point Method (IEEE-745)`**.

- C++ Literal
    - For **double**: 3.4, 5.986, 6.0.....
    - For **float**: 3.4f, 5.986f, 6.0f... , Look we are ending with **`f`** for float literal.

- C++ does inplecit conversion of data types when it is operating on different types of data. So, 
    - In **5.0/2** would be treated and **5.0/2.0** not **5/2** and **5.0** can loose it's significance.




## Some imprtant Tables 

1. C++ Data Types

| Basic Types | Further Classification |
|---|---|
| User-Defined Types | <ul><li>**Structure**</li><li>**Union**</li><li>**Class**</li><li>**enumeration**</li></ul> |
| Built-In Types | <ul><li>Integral Type<ul><li><b>int<b></li><li><b>char</b></li></ul></li><li><b>void</b></li><li>Floating Type<ul><li><b>float<b></li><li><b>double</b></li></ul></li></ul> |
| Derive Types | <ul><li><b>array</b></li><li><b>function</b></li><li><b>pointer</b></li><li><b>reference</b></li></ul> |




2. Size and range of C++ basic data type

| Type | Bytes | Range |
|---|---|---|
| char & signed char| 1 | -128 to 127 |
| unsigned char | 1 | 0 to 255 | 
| int, signed int, & sort int | 2 | -31768 to 32767 |
| unsigned int & unsigned sort int | 2 | 0 to 65535 |
| signed sort int | 2 | -32768 to 32767 |
| long int & signed long int | 4 | -2147483648 to 2147483647 |
| unsigned long int | 4 | 0 to 4294967295 |
| float | 4 | 3.4e-38 to 3.43e+38 |
| double | 8 | 1.7e-308 to  1.7e+308 |
| long double | 10 | 3.4e-4932 to 1.1e+49332 |



## Grades

- Quizes:-
    - 10/10 (100%)


### Some Resources

W3 Schools Tutorials for this Lesson

- [C++ Data Types](https://www.w3schools.com/cpp/cpp_data_types.asp)

- [C++ Numbers](https://www.w3schools.com/cpp/cpp_data_types_numeric.asp)

- [C++ Booleans](https://www.w3schools.com/cpp/cpp_data_types_bool.asp)

- [C++ Characters](https://www.w3schools.com/cpp/cpp_data_types_char.asp)

- [C++ Strings](https://www.w3schools.com/cpp/cpp_data_types_string.asp)


### File Info

These files are based on **`int`** data types.

| File Name | Description |
|---|---|
| [dateTime.cpp](dateTime.cpp) | This C++ program will print no. of weeks and days in given amount of days |
| [dateTimeInput.cpp](dateTimeInput.cpp) | This C++ program will print no. of weeks and days in given amount of days entered by the user. |
| [dateTimeRepeated.cpp](dateTimeRepeated.cpp) | This C++ program will print no. of weeks and days in given amount of days entered by the user, and repeat itself until user wants. |


These files are based on **float** and **double** data types.

| File Name | Description |
|---|---|
| [circleArea.cpp](circleArea.cpp) | In this C++ program we are going to print area of circle. |
| [circleAreaPI.cpp](circleAreaPI.cpp) | In this C++ program, we used **`cmath`** to bring exact value of `pi`. |


These files are based on **char** data types.

| File Name | Description |
|---|---|
| [ASCII_value.cpp](ASCII_value.cpp) | In this C++ program we are going to print ascii value of character intered by user. |

### Lab Files.
**->** No Lab this week.

## Type Casting 

The syntax for casting is:

```console
(data_type)expression;
```

An example of this is.

```cpp
int like = 56;
double take;

take = (double)like;
```

Some more resources:
- [Programiz](https://www.programiz.com/cpp-programming/type-conversion)
- [Geeks for Geeks](https://www.geeksforgeeks.org/type-conversion-in-c/)

