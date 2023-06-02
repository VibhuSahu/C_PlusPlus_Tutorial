#include <iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Emp:AbstractEmployee {
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
    void AskForPromotion() {
        if (Age > 30) {
            cout << Name << " got promotion" << endl;
        } else {
            cout << Name << " Sorry No promotion for you!" << endl;
        }
    }

};


class Developer: Emp {
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage) 
        :Emp(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;

    }

    void FixBug() {
        cout << getName() << " fix bug using " << FavProgrammingLanguage << endl;
    }
};





int main() {
    Developer employee1 = Developer("Vibhu Sahu", "Kendriya Vidyalaya No.1", 19 , "C++");
    Developer employee2 = Developer("Disha Sahu", "Kendriya Vidyalaya No.2", 18, "Hindi");
    printf("\n\n");

    employee1.FixBug();


    return 0;
}