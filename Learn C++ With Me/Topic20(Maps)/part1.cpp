#include<iostream>
#include<map>

using namespace std;

int main() {
    map<char, int> mp = {
        {'T', 7},
        {'U', 8},
        {'V', 9},
        {'W', 10}
    };

    cout << mp['T'] << endl;
    return 0;
}

/*
MAPS : Associative containers that store elements formed by a combination of a key value and a mapped value.

COMMAND : 
    g++ -std=C++11 main.cpp                         // to compile
    g++ -std=C++11 main.cpp -o file_name_to_give    // to compile with giving name

    ./a.out                                         // to run the compiled file

Ouput :


*/