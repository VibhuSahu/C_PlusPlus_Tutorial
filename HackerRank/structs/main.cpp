#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct studentData {
    int Age;
    string firstName;
    string lastName;
    int studentStandard;
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    studentData userInput;
    
    cin >> userInput.Age >> userInput.firstName >> userInput.lastName >> userInput.studentStandard;
    cout << userInput.Age << " " << userInput.firstName << " " << userInput.lastName << " " << userInput.studentStandard << endl;
    
    return 0;
}
