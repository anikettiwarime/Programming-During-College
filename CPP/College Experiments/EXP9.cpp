#include <iostream>
using namespace std;

class Employee {
protected:
    string name, desig;
    int salary, age;
public:
    virtual void setname(string s) = 0;
    void setSalary(int x) { salary = x; }
    virtual void display()
    {
        cout << "Name :" << name << "\nDesignation :" << desig << "\nAge :" << age << "\nSalary :" << salary << "\n" << endl;
    }
    void setAge(int x) { age = x; }
};
class Manager :public Employee
{
public:
    Manager() { desig = "Manager"; }
    void setname(string s) { name = s; }
};

class Clerk :public Employee {
public:
    Clerk() { desig = "Clerk"; }
    void setname(string s) { name = s; }
};


int main()
{
    Clerk c;
    Manager m;
    c.setname("Akash");
    c.setAge(21);
    c.setSalary(40000);
    m.setname("Ashwin");
    m.setAge(29);
    m.setSalary(70000);
    c.display();
    m.display();

}