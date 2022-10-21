#include <stdio.h>
#include <stdlib.h>
struct DynArray
{
    int capacity;
    int lastindex;
    int *ptr;
};
void doubleArray(struct DynArray *arr)
{
    int *temp,i=0;
    temp=(int*)malloc(sizeof(int*)*arr->capacity*2);
    while(i<=arr->lastindex)
    {
        temp[i]=arr->ptr[i];
        i++;
    }
    free(arr->ptr);
    arr->ptr=temp;
    arr->capacity*=2;
}
void halfArray(struct DynArray *arr)
{
    int *temp,i=0;
    temp=(int*)malloc(sizeof(int)*arr->capacity/2);
    while(i<=arr->lastindex)
    {
        temp[i]=arr->ptr[i];
        i++;
    }
    free(arr->ptr);
    arr->ptr=temp;
    arr->capacity/=2;
}
struct DynArray* createArray(int cap)
{
    struct DynArray *arr=NULL;
    arr=(struct DynArray*)malloc(sizeof(struct DynArray));
    arr->capacity=cap;
    arr->lastindex=-1;
    arr->ptr=(int*)malloc(sizeof(int*)*cap);
    return arr;
}

void append(struct DynArray *arr,int data)
{
    if(arr->lastindex==arr->capacity-1)
        doubleArray(arr);
    arr->lastindex++;
    arr->ptr[arr->lastindex]=data;
}

void insert(struct DynArray *arr,int index,int data)
{
    if (index<0 || index>arr->lastindex+1)
        printf("Invalid Index !!!\n");
    else
    {
    if (arr->capacity==arr->lastindex+1)
        doubleArray(arr);
    int i=arr->lastindex;
    arr->lastindex++;
    while(i>=index)
    {
        arr->ptr[i+1]=arr->ptr[i];
        i--;
    }
    arr->ptr[index]=data;
    }
}
void display(struct DynArray *arr)
{
    int i=0;
    printf("\n");
    while(i<=arr->lastindex)
    {
        printf("%d ",arr->ptr[i]);
        i++;
    }
}
void countTotal(struct DynArray *arr)
{
    printf("\n Total items = %d",arr->lastindex+1);
}
void delete(struct DynArray *arr,int index)
{
    if(index>arr->lastindex || index<0)
    printf("Invalid index !!!\n");
    else
    {
        int i=index;
        while(i<arr->lastindex)
        {
            arr->ptr[i]=arr->ptr[i+1];
            i++;
        }
        arr->lastindex--;
    }
    if (arr->lastindex==arr->capacity/2)
        halfArray(arr);
}
int main()
{
    struct DynArray *arr;
    arr=createArray(5);
    append(arr,25);
    append(arr,45);
    append(arr,35);
    append(arr,5);
    display(arr);
    printf("\n");
    insert(arr,4,260);
    append(arr,32);
    append(arr,42);
    append(arr,39);

    delete(arr,7);
    display(arr);
    delete(arr,6);
    display(arr);
    delete(arr,5);
    display(arr);
    delete(arr,3);
    display(arr);
    countTotal(arr);
}