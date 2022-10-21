#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int Emp_id;
    char Emp_name[20];
    float Emp_salary;
public:
    void setEmpid(int Id)
    {
        Emp_id = Id;
    }
    void setName(char name[])
    {
        strcpy(Emp_name, name);
    }
    void setSalary(float salary)
    {
        Emp_salary = salary;
    }
    int getEmpid()
    {
        return Emp_id;
    }
    char* getEmpName()
    {
        return Emp_name;
    }
    float getSalary()
    {
        return Emp_salary;
    }
    void showEmployeeDetails()
    {
        cout << endl << "Employee Id:" << Emp_id << endl << "Employee Name:" << Emp_name << endl << "Employee Salary:" << Emp_salary;
    }
    void set_Employee_Detail(int id, char name[20], float salary)
    {
        Emp_id = id;
        strcpy(Emp_name, name);
        Emp_salary = salary;
    }
    Employee()
    {
        Emp_id = 0;
        strcpy(Emp_name, "Name");
        Emp_salary = 0.0;
    }
    friend istream& operator>>(istream&, Employee&);
    friend ostream& operator<<(ostream&, Employee&);
    Employee(Employee& E)
    {
        Emp_id = E.Emp_id;
        strcpy(Emp_name, E.Emp_name);
        Emp_salary = E.Emp_salary;
    }
};
void displayEmployees(Employee[]);
void sortEmployeeBySalary(Employee[]);
istream& operator>>(istream& din, Employee& E)
{
    cout << "Enter Employee Id:";
    din >> E.Emp_id;
    cout << "Enter Employee Name:";
    din >> E.Emp_name;
    cout << "Enter Employee Salary:";
    din >> E.Emp_salary;
    return din;
}
ostream& operator<<(ostream& dout, Employee& E)
{
    dout << "\nEmployee Id:" << E.Emp_id << "\nEmployee Name:" << E.Emp_name << "\nEmployee Salary:" << E.Emp_salary;
    return dout;
}
void displayEmployees(Employee Emp[])
{
    int i,len;
    for(i=0;Emp[i].getEmpid();i++)
        len=i+1;
    for (i=0;i<len;i++)
    {
        cout << "\nEmployee Id:" << Emp[i].getEmpid();
        cout << "\nEmployee Name:" << Emp[i].getEmpName();
        cout << "\nEmployee Salary:" << Emp[i].getSalary()<<endl;
    }
}
void sortEmployeeBySalary(Employee Emp[])
{
    int i, j = 0,len;
    for (i = 0 ;Emp[i].getEmpid() ; i++);
    len=i;
    Employee temp;
    for (i = 0; i<len; i++)
        for (j = i+1;j<len;j++)
            if (Emp[i].getSalary() > Emp[j].getSalary())
            {
                temp = Emp[i];
                Emp[i] = Emp[j];
                Emp[j] = temp;
            }
}
void sortEmployeeByName(Employee Emp[])
{
    int i, j = 0,len;
    for (i = 0 ;Emp[i].getEmpid() ; i++);
    len=i;
    Employee temp;
     for(int i=0; i<len; i++)
        {
                for(int j=i+1; j<len; j++)
                {
                        int r = strcmp(Emp[i].getEmpName(),Emp[j].getEmpName());
                        if(r>0)
                        {
                                temp=Emp[i];
                                Emp[i]=Emp[j];
                                Emp[j]=temp;
                        }
                }
        }
}
void sortEmployeeById(Employee Emp[])
{
    int i, j = 0,len;
    for (i = 0 ;Emp[i].getEmpid() ; i++);
    len=i;
    Employee temp;
    for (i = 0; i<len; i++)
        for (j = i+1;j<len;j++)
            if (Emp[i].getEmpid() > Emp[j].getEmpid())
            {
                temp = Emp[i];
                Emp[i] = Emp[j];
                Emp[j] = temp;
            }
}
int main()
{
    Employee E[3], E1;

    for (int i = 0;i < 3; i++)
    {
        cin >> E[i];
        cout<<endl;
    }
    cout<<"Before Sorting:";
    displayEmployees(E);
    sortEmployeeByName(E);
    cout << "\n\n";
   /* for (int i = 0; E[i].getEmpid(); i++)
    {
        cout<<E[i]<<endl;
    }
    */
   cout<<"After Sorting:";
   displayEmployees(E);

}
