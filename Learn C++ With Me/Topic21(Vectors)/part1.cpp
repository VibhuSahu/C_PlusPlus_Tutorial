#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main(int argc, const char** argv) {
    vector<int> v1 = {1, 3, 2};

    // ACCESS VECTOR ELEMENT
    cout << "All element of VECTOR" << endl;
    cout << v1[0] << endl;
    cout << v1[1] << endl;
    cout << v1[2] << endl << endl;

    // SIZE OF VECTOR
    cout << "The size of a vector : " << v1.size() << endl << endl;

    // PRINTING FIRST AND LAST VECTOR
    cout << "The first element of vector : " << v1.front() << endl;
    cout << "The last element of vector  : " << v1.back() << endl << endl;

    // COMMON VECTOR METHOD AND CAPACITY
    cout << "The total capacity of vector : " << v1.capacity() << endl << endl;
    // if you add more elements after declaration of vector the capacity will be get double.
    // in vector the making extra space will be time consuming


    // INSERT AND ERASE THE ELEMENT

    // To append element from the back
    v1.push_back(9);
    v1.push_back(10);
    v1.push_back(11);

    cout << endl << endl << endl;

    cout << v1[0] << endl;
    cout << v1[1] << endl;
    cout << v1[2] << endl;
    cout << v1[3] << endl;
    cout << v1[4] << endl;
    cout << v1[5] << endl;
    cout << v1[6] << endl << endl;  // if the 6th index not present it will print '0'

    // To remove element from last
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();

    cout << "Size of the vector after poping the vector : " << v1.size() << endl;
    // the size of the vector after poping the vector is zero 

    return 0;
}
/*
VECTOR : Vector in C++ are sequence containers representing arrays that can change in size.

Ouput :
    All element of VECTOR
    1
    3
    2

    The size of a vector : 3

    The first element of vector : 1
    The last element of vector  : 2

    The total capacity of vector : 3




    1
    3
    2
    9
    10
    11
    0

    Size of the vector after poping the vector : 0
*/