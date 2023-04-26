#include<iostream>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{   
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    cout << endl << endl;

    for (int i = 0; i < 10; ++i) {
        cout << i << endl;
    }

    cout << endl << endl;

    for (int i = -5; i < 10; i++) {
        cout << i << endl;
    }


    
    
    return 0;
}


/*
FOR LOOP -  A for loop is a repetition control structure that allows you to efficiently write a loop that needs to execute a specified number of times.


Output :
    0
    1
    2
    3
    4
    5
    6
    7
    8
    9


    0
    1
    2
    3
    4
    5
    6
    7
    8
    9


    -5
    -4
    -3
    -2
    -1
    0
    1
    2
    3
    4
    5
    6
    7
    8
    9
*/