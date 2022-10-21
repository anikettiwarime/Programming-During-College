#include<stdio.h>
int Even_Rev(int);
int main()
{
    int n;
    scanf("%d",&n);
    Even_Rev(n*2);
    return 0;
}
int Even_Rev(int n)
{
    int temp;
    if(n==0)
    {
        return 2;
    }
    printf("\n%d",n);
    temp=Even_Rev(n-2);
    return 0;
}
