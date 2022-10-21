#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
    private:
        int empid;
        char name[20];
        float salary;
    public:
        void setEmpid(int x)
        {
            empid=x;
        }

        void setName(char n[])
        {
            strcpy(name,n);
        }

        void setSalary(float s)
        {
            salary=s;
        }

        void showEmployee()
        {
            cout<<endl<<"Employee ID    : "<<empid<<endl<<"Employee Name  : "<<name<<endl<<"Employee Salary: "<<salary;
        }

        int getID()
        {
            return empid;
        }

        char* getName()
        {
            return name;
        }

        int getSalary()
        {
            return salary;
        }
};
int main()
{
    Employee emp1;
    emp1.setEmpid(1);
    emp1.setName("Aniket");
    emp1.setSalary(999999);
    emp1.showEmployee();
    cout<<endl<<emp1.getName();
    Employee E[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<endl<<i<<"="<<E[i].getID();
    }
}