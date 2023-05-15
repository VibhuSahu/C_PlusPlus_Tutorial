#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
    cout << "Old enough to vote!";
    } else {
    cout << "Not old enough to vote.";
    }

    return 0;
}
