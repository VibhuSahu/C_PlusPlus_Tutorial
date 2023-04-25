#include<iostream>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{
    // Declare variables
    int x = 5, y = 3;
    
    // Logical AND 
    cout << "Logical AND : " << (x > 3 && x < 10) << endl;
    // returns true (1) because 5 is greater than 3 AND 5 is less than 10

    // Logical OR
    cout << "Logical OR : " << (x > 3 || x < 4) << endl;
    // returns true (1) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)


    // Logical NOT
    cout << "Logical NOT : " << !(x < 5 && x < 10) << endl;
    // returns false (0) because ! (not) is used to reverse the result

    return 0;
}


/*
Logical Operators - As with comparison operators, you can also test for true(1) or false(0) values with logical operators.


&&  -  Logical AND  -  Returns true if both statements are true
||  -  Logical OR   -  Returns true if both statements are
!   -  Logical NOT  -  Reverse the result, returns false if the result is true


Output : 
    Logical AND : 1
    Logical OR : 1
    Logical NOT : 1

*/