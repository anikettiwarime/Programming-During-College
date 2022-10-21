#include <stdio.h>
int NRev(int);
int main()
{
    int n;
    scanf("%d",&n);
    NRev(n);

}
int NRev(int n)
{
    printf("\n%d",n);
    int p;
    if(n==1)
        return 1;
    p=NRev(n-1);
}
