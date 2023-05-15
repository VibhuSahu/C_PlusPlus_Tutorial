#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    } 

    cout << endl << endl;
    // Same thing in while loop

    int j = 0;
    while (j < 10) {
        /* code */
        cout << j << endl;
        j++;
    }

    return 0;
}
