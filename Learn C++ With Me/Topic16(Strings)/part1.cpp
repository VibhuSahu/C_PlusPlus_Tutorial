#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string str = "Hello World!";
    str[1] = '3';
    cout << str[1] << endl;  // Changing of index elements in string
    cout << str << endl;     // Print string in str variable 
    return 0;
}

/*
Output : 
    #
    H3llo World!
*/