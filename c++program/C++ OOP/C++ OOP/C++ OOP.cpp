// C++ OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::string;

class AstractEmployee {
    virtual void askForPromotion() = 0;
};


class Employee : AstractEmployee{
    protected:
    string name;
    string company;
    int age = 0;

public:
    int times;
   
    //Employee() {

    //}

    Employee(string eName, string eCompany, int eAge) {
        name = eName;
        company = eCompany;
        age = eAge;
    }
    

    void setName(string eName) {
        name = eName;
    }

    string getName() {
        return name;
    }


    void setCompany(string eCompany) {
        name = eCompany;
    }

    string getCompany() {
        return company;
    }


    void setAge(int eAge) {
        if (eAge >= 18) {
            age = eAge;
        }
    }

    int getAge() {
        return age;
    }


    void introduceYourself() {
        std::cout << "Name - " << name << std::endl;
        std::cout << "Company - " << company << std::endl;
        std::cout << "Age - " << age << std::endl;
        std::cout << std::endl;
    }

    void askForPromotion() {
        if (age > 35) {
            std::cout << name << " got promoted" << std::endl;
        }else
        {
            std::cout << name << " ,sorry NO promotion for you" << std::endl;

        }
    }

    virtual void work() {
        std::cout << name << " is checking email, task backlog, performing task..." << std::endl;
    }

    virtual void work(int times) {
        std::cout << name << " is checking email, task backlog, performing task..." << " " << times << " times" << std::endl;
    }

};


class Developer : public Employee {
public:
    string favPogrammingLanguage;

    Developer(string eName, string eCompany, int eAge, string dFavPogrammingLanguage) 
    :Employee(eName, eCompany, eAge)
    {
        favPogrammingLanguage = dFavPogrammingLanguage;
        
    }

    void fixBug() {
        std::cout << name << " fix bug using " << favPogrammingLanguage << std::endl;
    
    }

    void work() {
        std::cout << name << " is wirting " << favPogrammingLanguage << std::endl;
    }


};


class Teacher : public Employee {
public:
    string subject;

    int times;

    void prepareLesson() {
        std::cout << name << " is preparing " << subject << " lesson " << std::endl;
    }

    Teacher(string eName, string eCompany, int eAge, string tSubject)
        :Employee(eName, eCompany, eAge)
    {
        subject = tSubject;
    }

    void work() {
        std::cout << name << " is teaching " << subject << std::endl;
    }

    void work(int times) {
        std::cout << name << " is teaching " << subject  << " " << times << " times" << std::endl;
    }

};

int main()
{
    Developer dev("Then", "GDSC-DTU", 20, "Java");
    Teacher teacher("Jack", "Ruoi phat sang", 5000000 , "bu fame");

    //dev.work();
    //teacher.work();

    Employee* e1 = &dev;
    Employee* e2 = &teacher;

    e1->work();
    e2->work();
    e2->work(3);

    //std::cout << &e << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
