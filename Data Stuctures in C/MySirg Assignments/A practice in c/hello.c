#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*ptr=NULL;
    scanf("%d",&n);
    ptr=calloc(n,4);
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
