#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    int x = 2;
    int *y = &x;

    cout << "  x = " << x << endl;
    cout << " &x = " << &x << endl;
    cout << "  y = " << y << endl;
    cout << " *y = " << *y << endl;

    return 0;
}
/*
Output:
      x = 2
     &x = 0x16fc66f9c
      y = 0x16fc66f9c
     *y = 2 
*/