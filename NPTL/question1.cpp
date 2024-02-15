// Question1. Write a C++ program to read 3 integers & print the sum, product, average, largest & smallest of these numbers?
#include <iostream>
using namespace std;

class ProgramThreeIntegers {
    public:
        int num1, num2, num3;
        
    // Constructors
    ProgramThreeIntegers(int num1, int num2, int num3) {
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
    }

    int sumFunction() {
    return num1 + num2 + num3; }

    int productFunction(){
    return num1 * num2 * num3; }

    float averageFunction() {
    return ((num1 + num2 + num3) / 3) ; }

    int largestFunction() {
    return ((num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3)); }

    
    int smallestFunction() {
        return ((num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3)); }    

};



int main() {
    int num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    // Create object of class with the three inputted integers.
    ProgramThreeIntegers program1(num1, num2, num3);

    // Calling the functions and displaying their results.
    cout << "The Sum of Three numbers is: " << program1.sumFunction() << endl;
    cout << "The Product of Three numbers is: " << program1.productFunction() << endl;
    cout << "The Average of three numbers is: " << program1.averageFunction() << endl;
    cout << "The Largest number is: " << program1.largestFunction() << endl;
    cout << "The Smallest number is: " << program1.smallestFunction() << endl;

    return 0;
}