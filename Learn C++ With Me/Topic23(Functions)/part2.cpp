#include <iostream>
#include <string>

using namespace std;

// VOID FUNCTION
void test() {
    for (int i = 0; i < 10; i++) {
        cout << i;
    }
}

// taking input in void function
void printNTimes(int n, string text) {
    for (int j = 0; j < n; j++) {
        cout << text << endl;
    }
}


int main(int argc, const char** argv) {
    test();
    printf("\n");
    test();

    printNTimes(5, "vibhu");

    return 0;
}
/*
VOID - void function doesn't return anything

Ouput :
    0123456789
    0123456789vibhu
    vibhu
    vibhu
    vibhu
    vibhu     
*/