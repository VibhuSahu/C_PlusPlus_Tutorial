#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arrSize;
    cin >> arrSize;
    int arrUser[arrSize];
    int UserInput;

    for (int i = 0; i < arrSize; i++) {
        /* code */
        cin >> UserInput;
        arrUser[i] = UserInput;
    }

    for (int i = (arrSize - 1); i > -1; i--) {
        cout << arrUser[i] << " ";

    }
    

    return 0;
}
