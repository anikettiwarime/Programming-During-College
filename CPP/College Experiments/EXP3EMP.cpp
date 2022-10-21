#include<iostream>
#include<string.h>
using namespace std;
class Person
{
protected:
    string name, address;
    int age;
public:
    void inputdata()
    {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter Address: ";
        cin >> address;
    }
    void showdata()
    {
        cout << "\nName: " << name << "\nAge: " << age << "\nAddress: " << address;
    }

};
class Job : public Person
{
protected:
    string desig;
public:
    void inputid()
    {
        cout << "Enter designation: ";
        cin >> desig;
    }
    void showid()
    {
        cout << "\nDesignation: " << desig;
    }
};
class Employee :public Job
{
protected:
    int empid;
    int salary;
public:
    void enterinfo()
    {
        cout << "Enter Empid: ";
        cin >> empid;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void showinfo()
    {
        cout << "\nEmpid:" << empid << "\nSalary:" << salary;
    }
};
int main()
{
    Employee e1[10];
    int c;
    cout << "Enter no of employees to enroll: ";
    cin >> c;
    for (int i = 0;i < c;i++)
    {
        cout << "Enter " << i + 1 << " employee Information";
        e1[i].inputdata();
        e1[i].inputid();
        e1[i].enterinfo();
        cout << endl;
    }
    for (int i = 0;i < c;i++)
    {
        e1[i].showdata();
        e1[i].showid();
        e1[i].showinfo();
        cout << endl;
    }
}
