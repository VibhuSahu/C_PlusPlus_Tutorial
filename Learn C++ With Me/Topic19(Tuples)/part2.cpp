#include <iostream>
#include <tuple>

using namespace std;

int main() {
    // Making two tuple 
    tuple<int, int> t1 = make_tuple(1, 2);
    tuple<int, int> t2 = make_tuple(3, 4);


    // swaping elements wiht help of the swap function
    t1.swap(t2);    // t2.swap(t1); and t1.swap(t2) both are same
    
    // Printing Result after the swap function
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;

  return 0;
}
/*
Output :
  3
  4
  1
  2
*/