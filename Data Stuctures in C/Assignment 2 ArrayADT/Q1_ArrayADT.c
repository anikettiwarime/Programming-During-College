#include <stdio.h>
#include <stdlib.h>
struct ArrayADT
{
    int capacity;
    int lastindex;
    int *ptr;
};
struct ArrayADT* createArray (int cap)
{
    struct ArrayADT *arr=NULL;
    arr=(struct ArrayADT*)malloc(sizeof(struct ArrayADT));
    arr->capacity=cap;
    arr->lastindex=-1;
    arr->ptr=(int*)malloc(sizeof(int));
    return arr;
}
void append(struct ArrayADT *arr,int data)
{
    if(arr->lastindex+1==arr->capacity)
        printf("Array is Full");
    else
    {
        arr->lastindex++;
        arr->ptr[arr->lastindex]=data;
    }
}
void insert(struct ArrayADT *arr,int location,int data)
{
    if (location<0||location>arr->lastindex+1)
    {
        printf("Invalid index !!!");
    }
    else if(arr->capacity==arr->lastindex+1)
        printf("Array is already Full");
    else
    {
        int i=arr->lastindex;
        arr->lastindex++;
        arr->ptr[arr->lastindex]=arr->ptr[i];
        while (location-1!=i)
        {
            arr->ptr[i]=arr->ptr[i-1];
            i--;
        }
        arr->ptr[location-1]=data;
    }
}
void coutData(struct ArrayADT *arr)
{
    if(arr->lastindex<0)
        printf("No Data in Array");
    else
        printf("There are %d elements in the Array",arr->lastindex+1);
}
int getItem(struct ArrayADT *arr,int position){  return arr->ptr[position-1];}
void EditItem(struct ArrayADT *arr,int position,int data)
{
    if(arr->lastindex<position || position<0)
    printf("Invalid index");
    else
        arr->ptr[position-1]=data;
}
void delete(struct ArrayADT *arr,int position)
{
    if(arr->lastindex<0||arr->lastindex<position)
        printf("Array is Already Empty Or Underflow");
    else
    {
        int i=position-1;
        while(arr->lastindex!=i)
        {
            arr->ptr[i]=arr->ptr[i+1];
            i++;
        }
        arr->lastindex=i-1;
    }
}
void searchItem(struct ArrayADT *arr,int data)
{  
    int i=0;
    for(i=0;i<=arr->lastindex;i++)
        if(data==arr->ptr[i])
            printf("%d is present at %d index",data,i);
}
void viewAllItems(struct ArrayADT *arr)
{
    if(arr->lastindex<0)
        printf("No items in Array");
    else
    {
        int i=0;
        while (i!=arr->lastindex+1)
        {
            printf("%d ",arr->ptr[i]);
            i++;
        }      
    }
}
int main() 
{
    struct ArrayADT *arr;
    arr=createArray(5);
    append(arr,10);    
    append(arr,20);    
    append(arr,30);
    viewAllItems(arr);
    insert(arr,2,40);
    printf("\n");
    viewAllItems(arr);
    insert(arr,3,50);
    printf("\n");
    viewAllItems(arr);
    printf("\n");
    coutData(arr);
    delete(arr,2);
    printf("\n");
    viewAllItems(arr);
    printf("\n");
    searchItem(arr,20);
    printf("\n");
    coutData(arr);
    return 0;
}