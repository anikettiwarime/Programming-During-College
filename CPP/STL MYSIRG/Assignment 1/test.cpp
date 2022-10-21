#include <iostream>
#include <string>
#include <set>
#include <conio.h>
using namespace std;

class Employee
{
private:
    int empid;
    string name;
    float salary;
public:
    Employee() { }
    Employee(int id, string s1, float s) :empid(id), name(s1), salary(s) { }
    void showEmployee()
    {
        cout << endl << empid << "  " << name << " " << salary;
    }
    float getSalary() { return salary; }
};
class CompareSalary
{
public:
    bool operator()(Employee& x, Employee& y)
    {
        return x.getSalary() < y.getSalary();
    }
};

int main()
{

    Employee e1(1, "Faisal", 60000), e2(2, "Omkar", 50000), e3(3, "vipin", 55000), e4(4, "Rachit", 70000);
    set<Employee, CompareSalary>s1;
    set<Employee, CompareSalary>::iterator it;
    s1.insert(e1);
    s1.insert(e2);
    s1.insert(e3);
    s1.insert(e4);
    Employee emp;
    for (it = s1.begin();it != s1.end();it++)
    {
        emp = *it;
        emp.showEmployee();
    }
    cout << endl;
    getch();
}
