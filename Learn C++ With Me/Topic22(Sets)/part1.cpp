#include <iostream>
#include <ostream>
#include <string>
#include <set>

using namespace std;

int main(int argc, const char** argv) {
    set<char> s1 = {'C', 'D', 'E', 'F', 'A', 'D'};

    // INSERTING AND ERASING ELEMENTS
    s1.insert('B');   // insert a element
    s1.insert('C');





    for (auto itr = s1.begin(); itr != s1.end(); ++itr) {
        cout << *itr << endl;
    }

    // TO CHECK IF THE ELEMENT IS IN THE SET OR NOT
    if (s1.find('C') == s1.end()) {
        cout << "COould not find C" << endl;
    } else {
        cout << "Found C!" << endl;
    }

    return 0;
}

/*
SETS : Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it.

Output :
    A
    B
    C
    D
    E
    F
    Found C!
*/