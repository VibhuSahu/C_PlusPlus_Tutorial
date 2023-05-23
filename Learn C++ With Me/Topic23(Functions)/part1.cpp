#include<iostream>
#include<string>

using namespace std;

// CREATING THE FUNCTION FOR ADDING TWO NUMBER
int add(int a, int b) {
    return a + b;
}


int main(int argc, const char** argv) {
    int result = add(1, 2);
    cout << result << endl;
    
    return 0;
}