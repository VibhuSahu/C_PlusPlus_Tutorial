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
