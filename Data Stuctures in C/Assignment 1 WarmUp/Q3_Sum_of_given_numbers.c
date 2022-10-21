//Sum of given numbers
#include<stdio.h>
int sum(int [],int);
int main()
{
    int n=5,i;
    int a[5];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Sum of given %d number is %d",n,sum(a,n));
}
int sum(int a[],int size)
{
     int i,sum=0;
     for(i=0;i<size;i++)
        sum+=a[i];
     return sum;
}
