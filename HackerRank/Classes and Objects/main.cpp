#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

// Write your Student class here
class Student {
private:
    int scores[5];
    int sum;

public:
    Student() : sum(0) {}
    int calculateTotalScore() { return sum; }
    void intput() {
        for (int i=0; i<5; i++) {
            cin >> scores[i];
            sum += scores[i];
        }
    }
};




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int numStudent;
    cin >> numStudent;
    Student *arrStudent = new Student[numStudent];

    for(int i = 0; i < numStudent; i++) {
        arrStudent[i].intput();
    }

    // calculate kristen's score
    int kristenScore = arrStudent[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 0; i < numStudent; i++) {
        int total = arrStudent[i].calculateTotalScore();
        if (total > kristenScore) {
            count++;
        }
    }

    // print result
    cout << count << endl;



    return 0;
}