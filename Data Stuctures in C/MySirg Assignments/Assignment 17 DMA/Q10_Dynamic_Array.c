#include <stdio.h>
#include <stdlib.h>
void arraysort(int a[],int size)
{
    int *p=NULL;
    int *q=NULL;
    int i,j=0,k=0,count=0;
    for(i=0;i<size;i++)
    {
        if(a[i]<0)
        count++;
    }
    p=calloc(count,4);
    q=calloc(size-count,4);

    for(i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            p[j]=a[i];
            j++;
        }
        else
        {
            q[k]=a[i];
            k++;
        }
    }
    printf("\nArray 1: ");
    for(i=0;p[i];i++)
        printf("%d ",p[i]);
    
    printf("\nArray 2: ");
    for(i=0;q[i];i++)
        printf("%d ",q[i]);

    free(p);
    free(q);
}
int main()
{
    int array[10]={10,20,30,50,-20,-25,-12,60,18,-100};
    int i=0;
    for(i=0;i<10;i++)
    printf("%d ",array[i]);
    printf("\n");
    arraysort(array,10);
}