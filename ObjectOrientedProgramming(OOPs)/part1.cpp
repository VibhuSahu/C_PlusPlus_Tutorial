#include <iostream>

using namespace std;

class Employee {
public:
    std::string Name;
    std::string Company;
    int Age;

    // Functions for printing all details
    void IntroduceYourSelf() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

};

int main(int argc, const char** argv) {
    // Info of first employee
    Employee employee1;
    employee1.Name = "Vibhu Sahu";
    employee1.Company = "Kendriya Vidyalaya No.1";
    employee1.Age = 19;
    employee1.IntroduceYourSelf();   // This will print all the information


    // Info of second employee
    Employee employee2;
    employee2.Name = "Disha Sahu";
    employee2.Company = "Kendriya Vidyalaya No.2";
    employee2.Age = 17;
    employee2.IntroduceYourSelf();  // This will print all the information


    return 0;
}