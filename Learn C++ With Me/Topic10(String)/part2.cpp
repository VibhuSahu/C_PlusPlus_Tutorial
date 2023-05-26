#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName;
    cout << "Type your first name : ";
    cin >> firstName;
    cout << firstName << " is such a cute name OOoooooo....!" << endl;


    cin.clear();
    cin.ignore(1000, '\n');  // it help you to take input after printing statements.


    string fatherName;
    cout << "Type your father name : ";
    getline(cin, fatherName);           // it help you to get whole line as input
    cout << " He you fatherName is " << fatherName << endl;


    return 0;
}
/*
CIN - cin considers a space (whitespace, tab, etc) as a terminating character, which means that it can only display a single word(even if you type many words)

getline() - We often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as  second


Output :
    Type your first name : Vibhu Sahu
    Vibhu is such a cute name OOoooooo....!
    Type your father name : Herprasad Sahu
    He you fatherName is Herprasad Sahu
*/