//Greatest number in array
#include<stdio.h>
int maxValue(int [],int);
int main()
{
    int a[10],i,max;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("%d\n",maxValue(a,10));
}
int maxValue(int a[],int size)
{
    int i,max=a[0];
    for(i=1;i<size;i++)
        if(max<a[i])
            max=a[i];
    return max;
}
