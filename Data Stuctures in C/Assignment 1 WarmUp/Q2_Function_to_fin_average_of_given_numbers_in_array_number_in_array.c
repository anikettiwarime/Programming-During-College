//Average of given number in array
#include <stdio.h>
float avg(int [],int);
int main()
{
    int a[10];
    float average;
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    average=avg(a,10);
    printf("%f",average);
}
float avg(int a[],int size)
{
    float avg;
    int i,sum=0;
    for(i=0;i<size;i++)
            sum+=a[i];
    avg=sum/(float)size;
    return avg;
}
