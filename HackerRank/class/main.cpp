#include <iostream>
#include <string>

using namespace std;

class objectStudent {
private:
    int Age;
    string FirstName;
    string LastName;
    int Standard;

public:
    // getting value from function
    int getAge() {
        return Age;
    }
    string getFirstName() {
        return FirstName;
    }
    string getLastName() {
        return LastName;
    }
    int getStandard() {
        return Standard;
    }

    // setting value from function
    void setAge(int varAge) {
        Age = varAge;
    }
    void setFirstName(string varFirstName) {
        FirstName = varFirstName;
    }
    void setLastName(string varLastName) {
        LastName = varLastName;
    }
    void setStandard(int varStandard) {
        Standard = varStandard;
    }

    void toLastReturn() {
        cout << Age << ", " << FirstName << ", " << LastName << ", " << Standard << endl;
    }

};


int main(int argc, const char** argv) {

    int inputAge;
    string inputFirstName;
    string inputLastName;
    int inputStandard;
    
    objectStudent element;


    cin >> inputAge >> inputFirstName >> inputLastName >> inputStandard;

    element.setAge(inputAge);
    element.setFirstName(inputFirstName);
    element.setLastName(inputLastName);
    element.setStandard(inputStandard);


    cout << element.getAge() << endl;
    cout << element.getLastName() << "," << element.getFirstName() << endl;
    cout << element.getStandard() << endl << endl;
    element.toLastReturn();

    return 0;
}