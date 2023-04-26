#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    // Diclare value
    int x = 2;

    // if Condtion only
    if (x < 7) {
        cout << " x is less then 7! " << endl;
        cout << " x is less then 7! " << endl;

        if (x < 3) {
            cout << " x is less then 3! " << endl;
        }
    }


    // if else condition
    int y;
    cin >> y;

    if (y == 10 || y == 9) {     
        cout << " This is my fav number!" << endl;
    } else {
        cout << " This is NOT my fav number!" << endl;
    }
    


    // Else If condition
    if (y == 10 || y == 9) {
        cout << " This is my fav number! " << endl;
    } else if (y < 5) {
        cout << " y is less then 5! " << endl;
    } else {
        cout << " This is NOT my fav number! " << endl;
    }

    return 0;
}





/*
If Statement - Allows you to control if a program enters a section of code or not based on whether a given condition is true or false.

Output :
    x is less then 7! 
    x is less then 7! 
    x is less then 3! 
    2                           // user input
    This is NOT my fav number!
    y is less then 5! 
*/