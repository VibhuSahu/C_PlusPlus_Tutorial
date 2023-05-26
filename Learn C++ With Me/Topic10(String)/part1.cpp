#include<iostream>
#include<string>

using namespace std;

int main(int argc, const char** argv) {
    string greeting = "Hello";

    cout << greeting << endl;


    // STRING CONCATENATION
    string firstName = "John";
    string lastName = "Doe";
    cout << "String Concatenation without space : " << firstName + lastName << endl;

    cout << "String Concatenation with space : " << firstName + " " + lastName << endl;

    // APPEND 
    string fullName = firstName.append(lastName);
    cout << "Printing string after append : " << fullName << endl;

    // ADDING NUMBER IN STRINGS
    string x = "10";
    string y = "20";
    cout << "z will be 1020 (a string) : " << x + y << endl;            // z will be 1020 (a string)

    // STIRNG LENGTH
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << "The length of the txt string is : " << txt.length() << endl;    // both are same length and size function
    cout << "The length of the txt string is : " << txt.size() << endl;


    // ACCESS STRINGS
    string myString = "Hello";

    cout << "first character in myString  : " << myString[0] << endl;    // first character in myString
    cout << "second character in myString : " << myString[1] << endl;    // second character in myString


    // CHANGE STRING CHARACTERS
    myString[0] = 'j';
    cout << "Change string characters : " << myString << endl;       // Outputs Jello instead of Hello

    return 0;
}

/*
Output :
    Hello
    String Concatenation without space : JohnDoe
    String Concatenation with space : John Doe
    Printing string after append : JohnDoe
    z will be 1020 (a string) : 1020
    The length of the txt string is : 26
    The length of the txt string is : 26
    first character in myString  : H
    second character in myString : e
    Change string characters : jello
*/