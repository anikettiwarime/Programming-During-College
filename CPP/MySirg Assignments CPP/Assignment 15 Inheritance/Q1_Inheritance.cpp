#include <iostream>
#include <string.h>
using namespace std;
class Person
{
    private:
        int age;
        char name[20];
    public:
       void setage(int x) { age=x; }
       void setname(char n[]) {strcpy(name,n);}
       int getage() { return age;}
       char* getName() {return name;}
};
class Employee:public Person
{
    private:
    static int empidauto;
        float salary;
    protected:
        int empid=++empidauto;
    public:
        void setEmployeeData(int e_age,char *e_name,float e_salary) 
        {
            setage(e_age);
            setname(e_name);
            salary=e_salary;
        }
       void showEmployeeData()
       {
           cout<<endl<<"Employee Id: "<<empid;
           cout<<endl<<"Employee Name: "<<getName();
           cout<<endl<<"Employee Age: "<<getage();
           cout<<endl<<"Employee Salary: "<<salary<<endl;
       }
       void countEmployee()
       {
           cout<<endl<<"Total Number of Employee: "<<empidauto;
       }
};
int Employee::empidauto;
int main()
{
    Employee e[5];
    e[0].setEmployeeData(20,"Aniket",50000);
    e[1].setEmployeeData(21,"Vedhas",51000);
    e[2].setEmployeeData(22,"Nishant",52000);
    e[3].setEmployeeData(23,"Raunak",53000);
    e[4].setEmployeeData(24,"Farhan",54000);
    for(int i;i<5;i++)
        e[i].showEmployeeData();
    e->countEmployee();
}