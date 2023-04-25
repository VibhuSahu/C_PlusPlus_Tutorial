#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main(int argc, char const *argv[])
{
    int x = 8;
    int y = 9;

    // Addtion 
    int sum = x + y;
    cout << "sum = " << sum << endl;


    // Subtraction
    int sub = x - y;
    cout << "sub = " << sub << endl;


    // Divide by int only
    int div = x / y;
    cout << "div = " << div << endl;
    
    // Divide under float variable
    float divf = x / y;
    cout << "divf = " << divf << endl;

    // Divide by float value under float variable
    float z = 9;
    float divfz = x / z;
    cout << "divfz = " << divfz << endl;


    // Multiply
    int mult = x * y;
    cout << "mult = " << mult << endl;

    // Modulus
    x = 5;
    y = 2;
    int mod = x % y;
    cout << "mod = " << mod << endl;


    //  Increment
    x = 5;
    ++x;
    cout << "increment = " << x << endl;


    // Decrement
    x = 5;
    --x;
    cout << "decrement = " << x << endl;

    // Power
    float power = pow(3,2); // power using cmath library by pow function
    cout << "power = " << power << endl;

    return 0;
}



/*
Operators - Is a symbol that tells the compiler to perform specific mathematical operations or logical manipulations.

1. Arithmetic operations
2. Assignment Operators
3. Comparison Operators
4. Logical operations
5. Bitwise operations


Arithmetic operations - Arithmetic operations are used to perform common mathematical operations.

# B E D M A S
B - Brackets
E - Exponentiation
D - Division
M - Multiplication
A - Division
S - Subtraction


+   Addition    
-   Subtraction
/   Mutliplication
*   Division
%   Modulus
++  Increment
--  Decrement
pow(a,b) couputes a raised to the power b (a^b)


Output :
    sum = 17
    sub = -1
    div = 0
    divf = 0
    divfz = 0.888889
    mult = 72
    mod = 1
    increment = 6
    decrement = 4
    power = 9
*/
