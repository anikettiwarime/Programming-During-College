#include<stdio.h>
int Nnum(int );
int main()
{
    int N;
    scanf("%d",&N);
    Nnum(N);
    return 0;
}
int Nnum(int n)
{
    int p;
    if(n==1)
    {
        printf("%d",n);
        return 1;
    }
    printf("\n%d",p=1+Nnum(n-1));
        return p;
}
