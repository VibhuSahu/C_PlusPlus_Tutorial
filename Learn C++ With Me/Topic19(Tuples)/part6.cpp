#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
    // CONCATENATING TUPLE wiht auto function
    tuple <int, char> t1(20, 'T');                  // Tuple with integer and character
    tuple <char, string> t2('R', "Hello World!");   // Tuple with character and string
    auto t3 = tuple_cat(t1, t2);              // Putting t1 and t2 together on t3 with auto function

    // Printing merge tuple
    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl;
    cout << get<2>(t3) << endl;
    cout << get<3>(t3) << endl;

    
    return 0;
}