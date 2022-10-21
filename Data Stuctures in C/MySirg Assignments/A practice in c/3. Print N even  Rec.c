#include<stdio.h>
int N_even(int);
int main()
{
    int n;
    scanf("%d",&n);
    //printf("%d",N_even(n));
    N_even(n);
    return 0;
}
int N_even(int n)
{
    int p;
    if(n==0)
        return n;
    printf("\n%d",p=2+N_even(n-1));
    return p;
}
