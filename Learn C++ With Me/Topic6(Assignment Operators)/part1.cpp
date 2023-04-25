#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    // Declare variables
    int x;


    // Simple Assignment(x = 5)
    x = 5;
    cout << "Assignment = " << x << endl;


    // Addition Assignment(x = x + 3)
    x = 5;
    x += 3;
    cout << "Addition Assignment = " << x << endl;


    // Subtraction Assignment(x = x - 2)
    x = 5;
    x -= 2;
    cout << "Subtraction Assignment = " << x << endl;


    // Multiply Assignment(x = x * 4)
    x = 5;
    x *= 4;
    cout << "Multiply Assignment = " << x << endl;


    // Divide Assignment(x = x / 4)
    x = 5;
    x /= 4;
    cout << "Divide Assignment = " << x << endl;


    // Modulus Assignment(x = x % 4) or remainder assignment
    x = 5;
    x %= 2;
    cout << "Modulus Assignment = " << x << endl;

    // Bitwise AND Assignment(a &= b)
    x = 5;
    x &= 3;
    cout << "Bitwise Assignment = " << x << endl;

    // Bitwise OR Assignment(a |= b)
    x = 5;
    x |= 3;
    cout << "Bitwise OR Assignment = " << x << endl;

    // Bitwise XOR Assignment(a ^= b)
    x = 5;
    x ^= 3;
    cout << "Bitwise XOR Assignment = " << x << endl;

    // Bitwise left shift Assignment(a <<= b)
    x = 5;
    x <<= 1;
    cout << "Bitwise Left Shift = " << x << endl;

    // Bitwise right shift Assignment(a >>= b)
    x = 5;
    x >>= 1;
    cout << "Bitwise Right Shift = " << x << endl;

    return 0;
}



/*
Assignment Operators - Assignment operators are used to assign vales to variables.


=
+=
-=
*=
/=
%=
&=
|=
^=
>>=
<<=


Output :
    Assignment = 5
    Addition Assignment = 8
    Subtraction Assignment = 3
    Multiply Assignment = 20
    Divide Assignment = 1
    Modulus Assignment = 1
    Bitwise Assignment = 1
    Bitwise OR Assignment = 7
    Bitwise XOR Assignment = 6
    Bitwise Left Shift = 10
    Bitwise Right Shift = 2
*/