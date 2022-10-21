#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    N_odd(n);
    return 0;
}
int N_odd(int n)
{
    int p;
    if(n==1)
    {
        printf("\n%d",n);
        return n;
    }
    printf("\n%d",p=2+N_odd(n-1));
    return p;
}
