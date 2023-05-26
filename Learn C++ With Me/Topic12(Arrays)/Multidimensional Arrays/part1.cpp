#include <iostream>
#include <string>

using namespace std;

// MULTI-DIMENSIONAL ARRAY
int main() {
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    string letter[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"},
        }
    };


    // All elements of the array
    for (int k = 0; k < 2; k++) {
    for (int j = 0; j < 4; j++) {
        cout << letters[k][j] << "\n";
        }
    }

    cout << endl << endl << endl;

    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            for (int z = 0; z < 2; z++) {
                cout << letters[x][y][z] << endl;
            }
        }
    }
    
    
    return 0;
}

/*
Output :
    A
    B
    C
    D
    E
    F
    G
    H



    A

    B

    E

    F


*/