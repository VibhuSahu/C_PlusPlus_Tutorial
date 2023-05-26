#include<iostream>
#include<string>

using namespace std;

// CREATING THE FUNCTION FOR ADDING TWO NUMBER
int add(int a, int b) {
    return a + b;
}


// CREATING THE FUNCTION WHICH DOES NOT TAKE ARGUMENT
int gettingLuckyNumber() {
    return 8;
    return 9; // This is not going to print because after return statement it go back to main function
}



int main(int argc, const char** argv) {
    int result = add(1, 2);
    cout << result << endl << endl;
    
    cout << "Getting a Lucky Number : " << gettingLuckyNumber() << endl;

    return 0;
}


/*
Output : 
    3

    Getting a Lucky Number : 8
*/