#include <iostream>
using namespace std;
using std::string;

// this code is to start learning oop using c++.
// be patient learn understand

class AbstractractEmployee
{
    virtual void Askforpromotion() = 0;
};

class Employee : AbstractractEmployee
{
protected:
    string Name;
    string Company;
    int Age;

public:
    Employee(string Name, string Company, int Age)
    {
        this->Name = Name;
        this->Company = Company;
        this->Age = Age;
    }

    virtual void work()
    {
        cout<< Name +"is doing employee work"<<endl;
    }

    void setName(string name)
    {
        Name = name;
    }

    void setCompany(string company)
    {
        Company = company;
    }

    void setAge(string company)
    {
        Company = company;
    }

    int getAge()
    {
        return Age;
    }

    string getCompany()
    {
        return Company;
    }

    string getName()
    {
        return Name;
    }

    void introduceYourself()
    {
        cout << "My name is " + getName() + " i'm working in " + getCompany() + " and my age is " + to_string(getAge()) << endl;
    }

    void Askforpromotion()
    {
        if (Age > 30)
            cout << "congrats, you are promoted" << endl;
        else
            cout << "sorry, You can't" << endl;
    }
};

class Developer:public Employee{
    public:
        string Favprogramminglanguage;
        Developer(string name, string company, int age, string favprogramminglanguage)
            : Employee(name, company, age)
        {
            Favprogramminglanguage=favprogramminglanguage;
        }

        void fixbug(){
            cout<<"bug fixed by"+Name<<endl;
        }

        void work()
        {
            cout << Name + "is doing " + Favprogramminglanguage << endl;
        }
};

class Teacher:public Employee{
    public:
    string Favsubject;
    Teacher(string name,string company,int age,string favsubject)
    :Employee(name,company,age)
    {
        Favsubject=favsubject;
    }
    void prepareLesson(){
        cout<< "I like the " + Favsubject << endl;
    }
    
    
};

int main()
{
    Employee employee1("Abdelrahman Elbeltagy", "Tum", 238);
    cout << employee1.getName() << endl;
    employee1.introduceYourself();
    employee1.Askforpromotion();
    Developer abdo=Developer("Abdoo","Tum",23,"Java");
    Teacher mahmoud=Teacher("Mahmoud","Tum",32,"Python");
    Employee* e1 = &abdo;
    Employee* e2 = &mahmoud;
    e1->work();
    e2->work();

    return 0;
}
