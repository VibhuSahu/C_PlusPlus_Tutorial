#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(int argc, const char** argv) {
    // TO CREATING MPP MAP
    map<char, int> mpp = {
        {'T', 7},
        {'S', 8},
        {'a', 4}
    };


    // ITERATING THROUGH MAPS (Rough code)
    for (map<char, int>::iterator itr = mpp.begin(); itr != mpp.end(); itr++) {
            cout << (*itr).first << endl;
            
        }

    // ITERATING THROUGH MAPS (Soft code)
    for (auto t = mpp.begin(); t != mpp.end(); t++) {
        cout << t->first << endl;
        cout << t->second << endl;
    }

        return 0;
}
/*
Output :
    7
    8
    4
    The size of mpp map : 3
    5
    1



    1
    pp first  : k
    pp second : 1
    0
    0
    0
    Is empty : 0
    polarbear@Vibhus-MacBook-Air Topic20(Maps) % ./part3
    S
    T
    a
    S
    8
    T
    7
    a
    4
*/