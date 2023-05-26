#include <iostream>
#include <tuple>

using namespace std;

int main() {
    // Putting tuple elements into int values
    tuple<int, int> T1 = make_tuple(1, 2);   // Making tuple and putting element
    
    // Declaration of x and y variables
    int x, y;

    // tiearing down the tuple elements and put them into x and y variables
    tie(x, y) = T1;

    // printing out the x and y variables
    cout << x << endl;
    cout << y << endl;

  
  return 0;
}
/*
Output :
  1
  2
*/