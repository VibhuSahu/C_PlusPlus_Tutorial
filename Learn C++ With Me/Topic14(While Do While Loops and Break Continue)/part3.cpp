#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // We will going to use the continue statement

    for (int i = 1; i < 10; i++){
        if (i == 9 || i == 7) {
            continue;
        } else {
            cout << i << endl;
            printf("Incrimention of number\n");
        }
    }
    return 0;
}
/*
Ouput :
    1
    Incrimention of number
    2
    Incrimention of number
    3
    Incrimention of number
    4
    Incrimention of number
    5
    Incrimention of number
    6
    Incrimention of number
    8
    Incrimention of number
*/
