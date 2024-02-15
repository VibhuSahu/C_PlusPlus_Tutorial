// Question3. Write a C++program to get a 4 digit number and display the sum of 4 digit.
#include <iostream>
using namespace std;

class Digit {
    int num;
    public:
    Digit(int value) {
        this->num = value;
    }
    
    int sumOfDigits() {
    int res = 0;
    while (num) {
        res += num%10;
        num = num / 10;
    }
    return res;
}
};

int main() {
    int num;
    cout << " Enter a 4 digit number  : "; cin >> num;

    Digit num1(num);
    cout << endl << " The sum of 4 Digit Number : " << num1.sumOfDigits() << endl;

    return 0;
}