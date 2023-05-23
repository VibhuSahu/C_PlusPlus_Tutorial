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