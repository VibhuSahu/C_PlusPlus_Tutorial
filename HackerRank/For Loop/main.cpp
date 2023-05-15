#include <iostream>
#include <string>
#include <cmath>

using namespace std;


void forLoopAlphabetic(int a,int b) {
    for (int i = a; i < b+1; i++) {
        switch (i) {
            case 1: cout << "one\n"; break;
            case 2: cout << "two\n"; break;
            case 3: cout << "three\n"; break;
            case 4: cout << "four\n"; break;
            case 5: cout << "five\n"; break;
            case 6: cout << "six\n"; break;
            case 7: cout << "seven\n"; break;
            case 8: cout << "eight\n"; break;
            case 9: cout << "nine\n"; break;
            default:
                if (i % 2) { cout << "odd\n"; break;}
                else { cout << "even\n"; break;}
    
        }
    }
}


int main(int argc, char const *argv[])
{
    /* code */
    int a, b;
    cin >> a >> b;

    forLoopAlphabetic(a, b);


    return 0;
}
