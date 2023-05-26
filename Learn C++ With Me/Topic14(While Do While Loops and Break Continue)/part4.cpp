#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    int x = 10;
    do {
        int add;
        cout << "Type a number to add to x : ";
        cin >> add;
        x += add;
        cout << "x is : " << x << endl;

    } while(x < 10);
    return 0;
}

/*
Output :
    Type a number to add to x : 5
    x is : 15
*/
