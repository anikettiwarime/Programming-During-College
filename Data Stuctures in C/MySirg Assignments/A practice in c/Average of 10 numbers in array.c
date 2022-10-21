//Average of 10 numbers in array
#include<stdio.h>
int main()
{
    int a[10],i,j,temp;

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    printf("\n\n");
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}
