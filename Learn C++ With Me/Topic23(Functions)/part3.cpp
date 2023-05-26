#include <iostream>
#include <string>

using namespace std;

int doMath(int x, int y, int z = 1) {
    return (x + y) * z;
}

int main(int argc, const char** argv) {
    cout << "The value return from the function (not using default value) - " << doMath(3, 4, 5) << endl;
    cout << "The value return from the function ( using  default  value ) - " << doMath(3,4) << endl;
    return 0;
}

/*
Output : 
    The value return from the function (not using default value) - 35
    The value return from the function ( using  default  value ) - 7
*/