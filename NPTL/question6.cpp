// Question6. Write a C++ program that generates the Fibonacci Series upto N terms.
#include<iostream>

using namespace std;

class Number {
    private:
    int num;

    public:
    Number(int n) : num(n) {}

    void Fibonacci() {
        int first = 0, second = 1, nextNum;

        cout << "Fibonacci series of " << num << ": ";

        for (int i = 0; i < num; i++) {
            nextNum = first + second;
            cout << nextNum << " ";
            
            first = second;
            second = nextNum;
        }
        cout << endl;
    }
};


int main() {
    int user;
    cout << "Enter the number of terms in the Fibonacci series you want : "; cin >> user;
    Number num(user);

    num.Fibonacci();

    return 0;
}