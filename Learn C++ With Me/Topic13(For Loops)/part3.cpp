#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    

    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < sizeOfArray; i++) {
        cout << arr[i] << "     " << (i * i) << "    " << pow(i,3) << endl;
    }

    return 0;
}

/*
Output : 
    0     0    0
    1     1    1
    2     4    8
    3     9    27
    4     16    64
    5     25    125
    6     36    216
    7     49    343
    8     64    512
    9     81    729
    10     100    1000
    11     121    1331
    12     144    1728
    13     169    2197
    14     196    2744
    15     225    3375
    16     256    4096

*/