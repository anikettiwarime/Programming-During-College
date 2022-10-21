#include <stdio.h>
int main()
{
    int arr[10]={10,20,30,30,40,20,20,30,10,40};
    int b[10];
    int i,j,c;

    for ( i = 0; i < 10; i++)
    {
        c=1;
        if (arr[i]!=-1)
            for(j=i+1;j<10;j++)
                if(arr[i]==arr[j])
                {
                    c++;
                    arr[j]=-1;
                }
        b[i]=c;
    }
    for ( i = 0; i < 10; i++)
        if (arr[i]!=-1)
        {
            printf("\n%d is %d times",arr[i],b[i]);
        }
}