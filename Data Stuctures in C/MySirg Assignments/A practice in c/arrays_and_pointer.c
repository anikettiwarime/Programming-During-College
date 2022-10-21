#include <stdio.h>
void input(int *,int);
void display(int *,int);
void sort(int *,int);
int main()
{
    int a[5];
    input(a,5);
    display(a,5);
    sort(a,5);
    display(a,5);
}

void input(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    scanf("%d",p+i);
}

void display(int *p,int size)
{
    int i;
    printf("\n");
    for(i=0;i<size;i++)
    printf("%d ",*(p+i));
}

void sort(int *p,int size)
{
    int i,t,j;
    for(i=0;i<size;i++)
        for(j=i;j<size;j++)
        {
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
}