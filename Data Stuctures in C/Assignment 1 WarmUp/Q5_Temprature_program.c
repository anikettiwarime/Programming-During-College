// Calculate min & Max temperature of several days
#include <stdio.h>
struct Temp
{
    float min,max;
};
void showData(struct Temp[], int );
void inputData(struct Temp[], int );
float avgMinTemp(struct Temp [],int);
float avgMaxTemp(struct Temp [],int);

void inputData(struct Temp a[],int totaldays)
{
    for(int i=0;i<totaldays;i++)
    {
        printf("\nEnter Minimum Temperature of day %d ",i+1);
        scanf("%f",&a[i].min);
        printf("\nEnter Maximum Temperature of day %d ",i+1);
        scanf("%f",&a[i].max);
    }
}

void showData(struct Temp t[],int totaldays)
{
    for(int i=0;i<totaldays;i++)
    {
        printf("\n Minimum Temperature is %f , Max Temperature is %f ",t[i].min,t[i].max);
    }
}

float avgMinTemp(struct Temp t[],int totalDays)
{
    float avg=0,sumofMinTemp=0;
    for (int i = 0; i < totalDays ; i++)
        sumofMinTemp+=t[i].min;
    avg=sumofMinTemp/totalDays;
    return avg;
}

float avgMaxTemp(struct Temp t[],int totalDays)
{
    float avg=0,sumofMaxTemp=0;
    for (int i = 0; i < totalDays ; i++)
        sumofMaxTemp+=t[i].max;
    avg=sumofMaxTemp/totalDays;
    return avg;
}

int main()
{
    int i;
    struct Temp t[2];
    inputData(t,2);
    showData(t,2);
    printf("\n%f",avgMinTemp(t,2));
    printf("\n%f",avgMaxTemp(t,2));    
}