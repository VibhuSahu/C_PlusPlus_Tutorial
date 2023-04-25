#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    // Boolean variables
    bool TrueValue = true;      // True value(1)
    bool FalseValue = false;    // False value (0)

    // Declaration of variables
    int x = 0, y = 2;


    // Equal to 
    cout << "Equal to : " << (x == y) << endl;

    // Not equal
    cout << "Not equal : " << (x != y) << endl;

    // Greater than
    cout << "Greater than : " << (x > y) << endl;

    // Less than
    cout << "Less than : " << (x < y) << endl;

    // Greater than or equal
    cout << "Greater than or equal : " << (x >= y) << endl;

    // Less than or equal
    cout << "Less than or equal : " << (x <= y) << endl;
    return 0;
}

/*
Comparison Operators - Comparison operator are used to compare two  values(or variables). This is important in programming, because it helps us to find answers and make decisions.

The return value of a comparison is either 1 or 0, which means true(1) or false(0). These values are known as Boolean values, and you will learn more about them in the Booleans and If..Else chapter.


Output :
    Equal to : 0
    Not equal : 1
    Greater than : 0
    Less than : 1
    Greater than or equal : 0
    Less than or equal : 1
*/