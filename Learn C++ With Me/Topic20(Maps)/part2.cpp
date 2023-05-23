#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<char, int> mp = {
      {'T', 7},
      {'S', 8},
      {'a', 4}
    };

    cout << mp['T'] << endl;
    cout << mp['S'] << endl;
    cout << mp['a'] << endl;


    // TO PRINT THE SIZE OF MAP
    cout << "The size of mpp map : " << mp.size() << endl;

    mp.insert(pair<char, int>('j', 5));
    cout << mp['j'] << endl;

    pair<char, int> pp('k', 1);
    mp.insert(pp);
    cout << mp['k'] << endl;


    cout << endl << endl << endl;

    cout << pp.second << endl;


    //  ERASING MAP PAIRS
    mp.erase(pp.first);
    cout << "pp first  : " << pp.first << endl;
    cout << "pp second : " << pp.second << endl;


    // ERASING ALL ELEMENT ON MAP 
    mp.clear();

    cout << mp['T'] << endl;
    cout << mp['S'] << endl;
    cout << mp['a'] << endl;


    // TO CHECK MAP IS EMPTY
    cout << "Is empty : " << mp.empty() << endl;
    
    return 0;
}