// Question4. Write a C++program to check if a number is Prime number or not.
#include <iostream>
using namespace std;

class Digit {
    int num;
    public:
    Digit(int value) {
        this->num = value;
    }
    
    string checkForPrimeNumber() {
    if (num==1 || num == 0){
        if (num == 0) {
            return "Zero is neither prime nor composite number";
        } else {
            return "1 is not a prime number because it have only on factor";
        }
    } else {
        for (int i = 2; i < num; i++) {
            if (num%i == 0) {
                  return "No, " + to_string(num) + " is not a prime number";
            }
        }
        return "Yes, " + to_string(num) + " is a Prime Number ";
        } 
    }


};

int main() {
    int num;
    cout << " Enter a 4 digit number  : "; cin >> num;

    Digit num1(num);
    cout << endl << " " << num1.checkForPrimeNumber() << endl;

    return 0;
}