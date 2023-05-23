#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, const char** argv) {
    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8};

    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << endl;
        }

    // Direc print of elements by using pointers
    for (auto itr = v2.begin(); itr != v2.end(); itr++) {
        cout << *itr << endl;
    }



    return 0;
}