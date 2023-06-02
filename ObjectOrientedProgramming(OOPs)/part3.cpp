#include <iostream>

using namespace std;




class Emp {
private:  // private variables cannot access directly
    string Name;
    string Company;
    int Age;

public:
    // Functions for fatch up the element
    string getName() {  // returns the Name
        return Name; 
        }

    string getCompany() {   // returns the Company
        return Company;
    }

    int getAge() {  // returns the Age
        return Age; 
    }


    // Functions for modifying the element
    void setName(string name) {  // modify the Name
        Name = name; 
        }

    void setCompany(string company) {   // modify the Company
        Company = company;
    }

    void setAge(int age) {  // modify the Age
        if(age >= 18){
        Age = age;}
    }


    // Getting all infomation
    void IntroduceYourSelf() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    // Constructor - creates a constructor and the constructor name should be same as class name
    Emp(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

};



int main() {
    Emp employee1 = Emp("Vibhu Sahu", "Kendriya Vidyalaya No.1", 19);
    employee1.IntroduceYourSelf();
    Emp employee2 = Emp("Dishal", "Kendriya Vidyalaya No.2", 17);
    printf("\n\n");

    // Print all Information seprately
    cout << "Name - " << employee1.getName() << endl;
    cout << "Company - " << employee1.getCompany() << endl;
    cout << "Age - " << employee1.getAge() << endl;

    return 0;
}