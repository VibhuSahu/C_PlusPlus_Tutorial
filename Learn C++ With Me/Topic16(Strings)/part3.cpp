#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string str = "Hello, world!";

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];     // storing the index value in c char variable
        cout << c << endl;   //  printing the c char variable
    }

    return 0;
}
/*
Output :
    H
    e
    l
    l
    o
    ,
    
    w
    o
    r
    l
    d
    !

*/