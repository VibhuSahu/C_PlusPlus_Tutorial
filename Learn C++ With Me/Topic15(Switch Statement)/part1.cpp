#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int x = 1;
    switch (x + 1) {
        case 1:
            cout << "Cool";
            break;
        case 2:
            cout << "Not cool";
            break;
        default:
            cout << "Invalid";
            break;

    }
    return 0;
}
/*
Output :
    Not cool
*/