#include <iostream>
#include <string>

using namespace std;


// USING REFERENCES FOR SWAPPING FUNCTION
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}


int main(int argc, const char** argv) {
    int a = 2;
    int b = 4;

    cout << "a before swap function : " << a << endl;
    cout << "b before swap function : " << b << endl;

    cout << "Swapping" << endl;
    swap(a, b);
    
    cout << "a after swap function : " << a << endl;
    cout << "b after swap function : " << b << endl;

    return 0;
}
/*
Output :
    a before swap function : 2
    b before swap function : 4
    Swapping
    a after swap function : 4
    b after swap function : 2
*/