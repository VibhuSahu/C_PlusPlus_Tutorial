#include <iostream>
#include <string>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Emp:AbstractEmployee {
private:  // private variables cannot access directly
    string Company;
    int Age;

protected:
    string Name;

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


class Developer:public Emp {
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage) 
        :Emp(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;

    }

    void FixBug() {
        cout << Name << " fix bug using " << FavProgrammingLanguage << endl;
    }
};

class Teacher: Emp {
public:
    string Subject;
    void PrepareLesson() {
        cout << getName() << " is preparing " << Subject << " lesson." << endl;
    }
    Teacher(string name, string company, int age, string subject) 
            :Emp(name, company, age) 
        {
            Subject = subject;
        }


};





int main() {
    Developer employee1 = Developer("Vibhu Sahu", "Kendriya Vidyalaya No.1", 19 , "C++");
    Developer employee2 = Developer("Disha Sahu", "Kendriya Vidyalaya No.2", 18, "Hindi");

    Teacher employee3 = Teacher("Rupesh Sahu", "Gyan Vigyan Bilaigarh", 22, "BCA");
    Teacher employee4 = Teacher("Raj Sahu", "Gyan Vigyan Bilaigarh", 22, "Agricalture");
    printf("\n\n");


    employee1.FixBug();
    employee2.AskForPromotion();
    employee3.PrepareLesson();

    return 0;
}