#include<iostream>
#include<string>

using namespace std;


int main(int argc, const char** argv) {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3];
    myNum[0] = 10;
    myNum[1] = 20;
    myNum[2] = 30;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // CHANGE AN ARRAY ELEMENT
    cars[0] = "Opel";



    // PRINTING ALL ELEMENTS IN ARRAY WITH LOOPS
    // Printing array elements with numbers itranting
    cout << endl << "All elements in Array cars" << endl;
    for (int j = 0; j < 4; j++) {
        cout << cars[j] << endl;
    }

    // The foreach loop
    cout << endl << "All elements in Array myNum" << endl;
    for (int elem : myNum) {
        cout << elem << endl;
    }

    // Print array elements with foreach loop
    cout << endl << "All elements in Array arrAlphabet" << endl;
    for (int intElment : arr) {
        cout << intElment << endl;
    }


    // GET THE SIZE OF AN ARRAY
    cout << endl << "The size of array name cars : " << sizeof(cars) << endl;
    // it show 20 instead of 5 because the sizeof operator returns the size of type in bytes

    // To find number of elements in array
    cout << "The number of elements in array name cars : " << sizeof(cars) / sizeof(string) << endl;


    return 0;
}

/*
Output :

    All elements in Array cars
    Opel
    BMW
    Ford
    Mazda

    All elements in Array myNum
    10
    20
    30

    All elements in Array arrAlphabet
    1
    2
    3
    4
    5
    6
    7
    8
    9

    The size of array name cars : 96
    The number of elements in array name cars : 4

*/