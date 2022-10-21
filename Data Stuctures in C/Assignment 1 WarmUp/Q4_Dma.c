#include <stdio.h>
#include <stdlib.h>
int* DMA_fun(int [],int,int [],int);
int main()
{
    int arr1[2];
    int arr2[1];
    int i;
    int *ptr=NULL;
    for ( i = 0;i<2; i++)
        scanf("%d",&arr1[i]);

    for ( i = 0;i<1; i++)
        scanf("%d",&arr2[i]);

    printf("Displaying integers: ");

    for ( i = 0; i<2; i++)
        printf("%d ",arr1[i]);
    for ( i = 0; i<1; i++)  
        printf("%d ",arr2[i]);
    
   ptr=DMA_fun(arr1,2,arr2,1);
   printf("\nDisplaying integers: ");
    for(i=0;i<3;i++)
        printf("%d ",*(ptr+i));
}
int* DMA_fun(int arr1[],int a,int arr2[],int b)
{
    int i;
    int *p = calloc(a+b,4);
    for(i=0;i<a;i++)
        *(p+i)=arr1[i];
    int  j=0;
    for(i=a;i<a+b;i++)
    {
        *(p+i)=arr2[j];
        if(j<b)
            j++;
    }
    return p;
}