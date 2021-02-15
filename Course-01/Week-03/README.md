# Week 02

**Please do not copy my code**

In this week we will code for **`Data Types and Expression Lab`** in C++.

| Project No. | Project Name | File |
|---|---|---|
| 01. | Coin Counter Lab | [counter.cpp](counter01.cpp) |
| 02. | Coin Converter Lab | [coins.cpp](coins.cpp) |
| 03. | BMI Metric Lab | [bmimetric.cpp](bmimetric.cpp) |
| 04. | BMI Imperial Lab | |


## <span style="text-decoration:underline">01. Coin Counter Lab</span>

In this lab we will asks the user to enter a number of quarters, dimes, nickels and pennies and then outputs the monetary value of the coins in the format of dollars and remaining cents in **`C++`**.

For reference on **`$`** chech on 

- [IIT-B](https://www.it.iitb.ac.in/~vijaya/ssrvm/worksheetscd/getWorksheets.com/Math/moneydoc.pdf) It has some question to solve.

- [ebscohost site](https://www.ebscohost.com/assets-sample-content/ell_math-currency.pdf).

Few points to note:

- The penny is worth one cent, or $0.01

- The nickel is worth five cents, or $0.05.

- The dime is worth ten cents, or $0.10.

- The quarter is worth 25 cents, or $0.25.

So, 
- quarter = 20
- dimes = 4
- nickels = 13 
- pennies = 17

in mathematical expression becomes

- **20 * 0.25 + 4 * 0.1 + 13 * 0.05 + 17 * 0.01** = **5 + 0.4 + 0.65 + 0.17** = <u>**6.22**</u>

### How code will run.
```console
ubuntu@ip:~$ g++ counter01.cpp && ./a.out
# of quarters: 20
# of dimes: 4
# of nickels: 13
# of pennies: 17
the total is 6 dollars and 22 cents
```

### Autograder Results for `Coin Counter Lab`

- Evaluating Counter Test 1 Output (2.0/2.0)
- Evaluating Counter Test 2 Output (2.0/2.0)
- Evaluating Counter Test 3 Output (2.0/2.0)
- Evaluating Counter Test 4 Output (2.0/2.0)
- Evaluating Counter Test 5 Output (2.0/2.0)

### Mistakes I have made

- Take care of **spellings** in output messages.

<br>
<br>

## <span style="text-decoration:underline">02. Coin Converter Lab</span>

This lab is basically continuation of previous lab but other way around. In this lab we will asks the user to enter a number of dollars and remaining cents and then outputs the monetary value of the coins in the format of quarters, dimes, nickels and pennies in **`C++`**.

So if we enter:

- dollars = 2
- cents = 37

The mathematical expression becomes:

- **2 * 100 + 37** = **237** cents.

Now, 

**quarter = 237/0.25**

like this we can calculate the others.

```console
ubuntu@ip:~$ g++ coins.cpp && ./a.out
# of dollars: 2
# of cents: 37
The coins are 9 quarters, 1 dimes, 0 nickels and 2 pennies
```

### Autograder Results for `Coin Converter Lab`

- Evaluating Test 1 Output (2.0/2.0)

- Evaluating Test 2 Output (2.0/2.0)

- Evaluating Test 3 Output (2.0/2.0)

- Evaluating Test 4 Output (2.0/2.0)

- Evaluating Test 5 Output (2.0/2.0)

### Mistakes I have made

- Division across different data-types.

<br>
<br>

## <span style="text-decoration:underline">03. BMI Metric Lab</span>

In this lab we will asks the user to enter **weight** and **height** and we will calculate **BMI** in C++.

### The formula for **`BMI`** is:-

    Weight / (Height**2)

`Where weight is in kilograms and height is in meters.`

So if we enter:

- weight = 50
- height = 1.58

The mathematical expression becomes:

- **50 / 1.58^2** = **20.03**.


```console
ubuntu@ip:~$ g++ bmimetric.cpp && ./a.out 
Please enter weight in kilograms: 50
Please enter height in meters: 1.58
BMI is: 20.03
```

### Autograder Results for `BMI Metric Lab`

- Evaluating Test 1 Output (2.0/2.0)

- Evaluating Test 2 Output (2.0/2.0)

- Evaluating Test 3 Output (2.0/2.0)

- Evaluating Test 4 Output (2.0/2.0)

- Evaluating Test 5 Output (2.0/2.0)


<br>
<br>

## <span style="text-decoration:underline">04. BMI Imperial Lab</span>

We are basically following the older lab but we are taking weight in ponds and height in inches. So, our math will be:

So if we enter:

- weight = 135
- height = 71

`Where weight is in ponds and height is in inches.`

The mathematical expression becomes:

- **(135 * 0.453592  ) / (71 * 0.0254)^2** = **20.03**.


```console
ubuntu@ip:~$ g++ bmiimperial.cpp && ./a.out
Please enter weight in pounds: 135
Please enter height in inches: 71
BMI is: 18.83
```

### Autograder Results for `BMI Imperial Lab`

- Evaluating Test 1 Output (2.0/2.0)

- Evaluating Test 2 Output (2.0/2.0)

- Evaluating Test 3 Output (2.0/2.0)

- Evaluating Test 4 Output (2.0/2.0)

- Evaluating Test 5 Output (2.0/2.0)

