#include <iostream>
#include <tuple>

using namespace std;

int main() {
  // Putting values in two variables 
  tuple<int, int> T1 = make_tuple(1, 2);
  int x, y;

  tie(x, y) = T1;

  cout << x << endl;
  cout << y << endl;

  
  return 0;
}
/*
Output :
  1
  2
*/