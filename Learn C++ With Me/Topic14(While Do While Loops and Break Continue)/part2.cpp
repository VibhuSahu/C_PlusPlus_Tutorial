#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    // while loop with true statement
    
    int inputUser = -1;
    while (true) {
        /* code */
        cout << "Type the number 1 or 2 : ";
        cin >> inputUser;
        if (inputUser == 1 || inputUser == 2) {
            break;
        }
        else if (inputUser == 4 ) {
            cout << "Cool"<< endl;
            break;
        }

    }
    
    return 0;
}

/*
Output:
    Type the number 1 or 2 : 4
    Cool
*/