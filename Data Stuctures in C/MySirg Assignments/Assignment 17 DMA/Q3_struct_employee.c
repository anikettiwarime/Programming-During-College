#include <stdio.h>
#include <string.h>
struct Employee
{
    int empid;
    char name[20];
    float salary;
};
int main()
{
    struct Employee e1;
    e1.empid=1;
    strcpy(e1.name,"Aniket");
    e1.salary=20000.25;
    printf("Empid:%d \nEmp Name:%s \nEmp Salary:%.2f",e1.empid,e1.name,e1.salary);
}