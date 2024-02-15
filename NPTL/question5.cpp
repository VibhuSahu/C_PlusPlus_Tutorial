// Question5. Write a C++ program to convert a Decimal into Binary, Octal and HexaDecimal.
#include <iostream>
#include <string>

using namespace std;

class DecimalNumber {
    private:
    int num;

    public:
    DecimalNumber(int num) {
        this->num = num;
    }

    //  Function to convert decimal number to binary
   void toBinary() {
        int bin[100];
        int count = 0, copyNum = num;

        while (copyNum) {
            bin[count++] = copyNum % 2;
            copyNum /= 2;
        }

        cout << " Binary : ";
        while (count > 0) {
            cout << bin[--count];
        }
        cout << endl;
    }


    //  Function to convert decimal number to octal
    void toOctal() {
        int oct[100];
        int count = 0, copyNum = num;

        while (copyNum) {
            oct[count++] = copyNum % 8;
            copyNum /= 8;
        }

        cout << " Octal : ";
        while (count > 0) {
            cout << oct[--count];
        }
        cout << endl;
    }


    // Functions to convert decimal numbers to HexaDecimal
    void toHexaDecimal() {
        int bin[100];
        int count = 0, copyNum = num;

        // Convert decimal to hexadecimal
        while (copyNum) {
            bin[count++] = copyNum % 16;
            copyNum /= 16;
        }

        cout << "HexaDecimal : ";

        // Print hexadecimal digits
        while (count > 0) {
            count--;
            if (bin[count] < 10) {
                cout << bin[count];
            } else {
                char hexChar = 'A' + (bin[count] - 10);
                cout << hexChar;
            }
        }

        cout << endl;
    }


};



int main() {
    int user;
    cout << "Enter a Decimal Number : "; cin >> user;

    DecimalNumber number1(user);

    number1.toBinary();
    number1.toOctal();
    number1.toHexaDecimal();

    return 0;
}