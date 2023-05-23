#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int x[] = {0,1,2,3,4,5,6,7};
    int *head = x;

    for (int i = 0; i < 8; i++) {
        head = x + i;
        cout << *head << endl;
    }
    return 0;
}

/*
Output :
    0
    1
    2
    3
    4
    5
    6
    7
*/