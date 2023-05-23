#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    int a = 9;
    int b = 2;

    // AND
    printf("    Bitwise AND : %d\n", a&b);

    // OR
    printf("    Bitwise OR  : %d\n", a|b);

    // XOR
    printf("    Bitwise XOR : %d\n", a^b);

    // NOT
    printf("    Not Bitwise : %d\n", ~a);

    // LEFT SHIFT
    printf("    Left Shift  : %d\n", a<<2);

    // RIGHT SHIFT
    printf("    Right Shift : %d\n", a>>2);

    return 0;
}
/*
Output :
    Bitwise AND : 0
    Bitwise OR  : 11
    Bitwise XOR : 11
    Not Bitwise : -10
    Left Shift  : 36
    Right Shift : 2
*/