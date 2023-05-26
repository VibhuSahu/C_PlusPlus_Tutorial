#include <iostream>
#include <string>

using namespace std;


// USING POINTER FOR SWAPPING FUNCTION
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 2;
    int b = 5;

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
    b before swap function : 5
    Swapping
    a after swap function : 5
    b after swap function : 2
*/