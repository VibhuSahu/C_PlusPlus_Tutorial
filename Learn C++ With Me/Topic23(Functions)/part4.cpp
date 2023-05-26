#include <iostream>
#include <string>
#include <utility>

using namespace std;

// WEIRD FUNCTION RETURN TYPES


pair<int, int> makePair(int x, int y) {
    return pair<int, int>(x, y);
}

pair<int, int> greaterValue(int x, int y) {
    if (x < y) {
        return pair<int, int>(x, y);
    }
    return pair<int, int>(y, x);
}




int main(int argc, const char** argv) {
    cout << "The first  value of makePair is " << makePair(2,3).first << endl;
    cout << "The second value of makePair is " << makePair(2,3).second << endl <<endl;

    cout << "The Greater Value of greaterValue is " << greaterValue(5, 10).second << endl;
    
    return 0;
}