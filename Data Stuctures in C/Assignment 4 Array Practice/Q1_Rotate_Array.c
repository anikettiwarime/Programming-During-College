#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
void rotateArrayLeft(int*,int);
void rotateArrayRight(int*,int);
void display(int *,int);
void distinctElement(int* ,int );

void rotateArrayLeft(int* a,int size)
{
    int first;
    first=*a;
    for(int i=0;i<size-1;i++)
        a[i]=a[i+1];
    a[size-1]=first;
}

void rotateArrayRight(int* a,int size)
{
    int last;
    last=*(a+(size-1));
    for(int i=size-1;i>0;i--)
        a[i]=a[i-1];
    a[0]=last;
}

int menu()
{
    int choice;
    printf("\n1.Rotate Left");
    printf("\n2.Rotate Right");
    printf("\n3.Find Second large");
    printf("\n4.Find Distinct Element");
    printf("\n5.Exit");
    printf("\nEnter Your choice\n");
    scanf("%d",&choice);
    return choice;
}

void display(int *ptr,int size)
{
    printf("\n Array : ");
    for(int i=0;i<size;i++)
        printf("%d ",ptr[i]);
}

int findSecondLarge(int *a,int size)
{
    int large,secondLarge,index;
    large=a[0];
    secondLarge=a[0];
    for(int i=0;i<size;i++)
        if(a[i]>large)
            large=a[i];

    for(int i=0;i<size;i++)
    {
        if(a[i]==large)
            continue;
        if(a[i]>secondLarge)
            secondLarge=a[i];
    }
    return secondLarge;
}

int main()
{
    int n;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    int *ptr=calloc(n,sizeof(int*));
    for(int i=0;i<n;i++)
        scanf("%d",&ptr[i]);

    while(1)
    {
        display(ptr,n);
        switch (menu())
        {
        case 1:
            rotateArrayLeft(ptr,n);
            break;
        case 2:
            rotateArrayRight(ptr,n);
            break;
        case 3:
            findSecondLarge(ptr,n);
            break;
        case 4:
            distinctElement(ptr,n);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice retry");
            break;
        getch();
        }
    }
    return 0;
}

void distinctElement(int *a,int size)
{
    int i,j, c;
    int *ptr=(int*)calloc(size,sizeof(int*));// for copying original array
    int *b=(int*)calloc(size,sizeof(int*));// for counting of each element

    //copy the original array in new dynamic array
    for ( i = 0; i < size; i++)
        ptr[i]=a[i];

    //counting distinct elements

    for ( i = 0; i < size; i++)
    {
        c=1;
        if (ptr[i]!=-1) //checking is there any duplicate or not
        {
            for(j=i+1;j<size;j++)
                {
                    if (ptr[i]==ptr[j])
                    {
                        c++;
                        ptr[j]=-1;
                    }
                }
        }
        b[i]=c;
    }
    for ( i = 0; i < size; i++)
    {
        if(ptr[i]!=-1)
        {
            printf("\n%d is %d times",ptr[i],b[i]);
        }
    }
    free(ptr);
    free(b);
}