#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // Creating References
    int a = 2;
    int &b = a;
    int &c = b;

    b = 4;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;


    return 0;
}
/*
ALIAS - Is a name that refers to a previously defined type

REFERENCES - A reference is a simple reference datatype that is less powerful but safer than the pointer type inherited from C


Output :
    a = 4
    b = 4
    c = 4

*/