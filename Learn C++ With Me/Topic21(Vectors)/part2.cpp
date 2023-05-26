#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char** argv) {
    vector<int> v1 = {3, 4, 5, 6, 7, 8, 9};


    printf("Beforce the elements is getting inserted : %d\n", v1[0]);
    printf("Beforce the elements is getting inserted : %d\n", v1[1]);
    printf("Beforce the elements is getting inserted : %d\n", v1[7]);

    // INSERTING THE ELEMENT IN SIDE THE VECTOR
    v1.insert(v1.begin(), 1);
    v1.insert(v1.begin() + 1, 2);
    v1.insert(v1.end(), 10);

    printf(" After the elements is getting inserted the first  element is  : %d\n", v1[0]);
    printf(" After the elements is getting inserted the second element is  : %d\n", v1[1]);
    printf(" After the elements is getting inserted the second element is  : %d\n", v1[9]);


    // ERASING THE VECTOR ELEMENT FROM END AND BEGINNING
    v1.erase(v1.begin());

    printf(" After the elements is getting erase the first  element is  : %d\n", v1[0]);
    printf(" After the elements is getting erase the second element is  : %d\n", v1[1]);
    printf(" After the elements is getting erase the second element is  : %d\n", v1[8]);

    
    return 0;
}
/*
Output :
    Beforce the elements is getting inserted : 3
    Beforce the elements is getting inserted : 4
    Beforce the elements is getting inserted : 0
    After the elements is getting inserted the first  element is  : 1
    After the elements is getting inserted the second element is  : 2
    After the elements is getting inserted the second element is  : 10
    After the elements is getting erase the first  element is  : 2
    After the elements is getting erase the second element is  : 3
    After the elements is getting erase the second element is  : 10
*/