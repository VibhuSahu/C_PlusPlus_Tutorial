#include <iostream>
#include <tuple>     // for using tuple we include tuple library
#include <string>

using namespace std;

int main() {
    // how we generally use tuple
  tuple <int, string> person(20, "Tim");
  cout << get<1>(person) << endl;   // how we print tuple index 1

    // changing the 1 index element
  get<1>(person) = "Billy";
  cout << get<1>(person) << endl; // printing index 1 after changing


    // Only Declaration of tuple
  tuple< int, char, bool, float> thing;
  // Inserting values into the tuple already declared
  thing = make_tuple(23, 'H', true, 24.3);

  cout << get<0>(thing) << endl;
  cout << get<1>(thing) << endl;
  cout << get<2>(thing) << endl;
  cout << get<3>(thing) << endl;

  return 0;
}