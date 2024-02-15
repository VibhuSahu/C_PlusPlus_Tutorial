// Question2.
#include <iostream>
using namespace std;

class Digit {
    int value;
    public:
    Digit(int value) {
        this->value = value;
    }
    
    void checkDivisible() { 
        cout << "Divisiblendly 2 : " << (!(value%2) ? "Yes" : "No") << endl;
        cout << "Divisiblendly 3 : " << (!(value%3) ? "Yes" : "No") << endl;
        cout << "Divisiblendly 4 : " << (!(value%4) ? "Yes" : "No") << endl;
        cout << "Divisiblendly 6 : " << (!(value%6) ? "Yes" : "No") << endl;
    }
};

int main() {
    int num;
    cout << "Enter a 4 digit number  : "; cin >> num;

    Digit num1(num);
    num1.checkDivisible();

    return 0;
}