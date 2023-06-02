#include <iostream>

using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    // Functions for printing all details
    void IntroduceYourSelf() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    // COnstructure
    Employee(string nameEmp, string companyEmp, int ageEmp) {
        Name = nameEmp;
        Company = companyEmp;
        Age = ageEmp;
    }

};

int main() {
    // Info about Employee3
    Employee employee3 = Employee("Vibhu Sahu", "Kendriya Vidyalaya no.1", 22);
    employee3.IntroduceYourSelf();

    return 0;
}