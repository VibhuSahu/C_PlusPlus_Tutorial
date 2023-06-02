#include <iostream>

using namespace std;

class Emp {
private:  // private variables cannot access directly
    string Name;
    string Company;
    int Age;

public:
    string getName() { 
        return Name; 
        }

    string getCompany() {
        return Company;
    }

    int getAge() {
        return Age; 
    }


    void setName(string name) { 
        Name = name; 
        }

    void setCompany(string company) {
        Company = company;
    }

    void setAge(int age) {
        if(age >= 18){
        Age = age;}
    }

    void IntroduceYourSelf() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    Emp(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

};



int main() {
    Emp employee1 = Emp("Vibhu Sahu", "Kendriya Vidyalaya No.1", 19);
    employee1.IntroduceYourSelf();
    printf("\n\n");

    // Modifing the employee1
    employee1.setName("Herprasad Sahu");
    employee1.setCompany("Chhattisgarh School Rikotar");
    employee1.setAge(15);


    printf("\n\n");

    // Print all Information seprately
    cout << "Name - " << employee1.getName() << endl;
    cout << "Company - " << employee1.getCompany() << endl;
    cout << "Age - " << employee1.getAge() << endl;

    return 0;
}