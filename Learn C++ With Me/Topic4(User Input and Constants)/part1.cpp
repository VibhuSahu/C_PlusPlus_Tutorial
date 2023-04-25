#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    // It is constant it cannot be changed
    // You cannot change the value
    // You only put values in the time of declaration of values
    const double pi = 3.45;
    int input;
    cout << "Enter any number : ";
    cin >> input;
    cout << "here is the number : " << input;
    return 0;
}

/*
    cin - is an object of class iostream. It is used to accept the input from the standard input device i.e. keyboard
*/

/*
Output : 
    Enter any number : 5
    here is the number : 5%   
*/