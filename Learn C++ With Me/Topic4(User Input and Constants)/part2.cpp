#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n;
    cout << n << endl;

    cin.clear();
    cin.ignore(1000, '\n');

    cin >> x;
    cout << cin.fail() <<endl;
    cout << x;
    return 0;
}
/*
Output :
    5       // intput
    5
    hello   // intput
    1
    0%       
*/

/*
cin.clear();

NOTE : This will clears the error flag on cin and jumps into the next step.


cin.ignore(1000, '\n'); 

NOTE : They help you to take input after taking one input print it earlier
*/

/*
cin.fail();

NOTE : It will print '0' if input is correct and '1' if input is wrong
*/