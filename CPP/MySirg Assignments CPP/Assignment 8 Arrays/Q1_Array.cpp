#include <iostream>
using namespace std;
class Array
{
    private:
    int a[10];
    public:
    void inputArrayElements()
    {
        cout<<"Enter 10 Elements in array"<<endl;
        for(int i=0;i<10;i++)
            cin>>a[i];
    }

    void displayArray()
    {
        cout<<endl;
        for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    }

    void findMaxElement()
    {
        int max=a[0];
        for(int i=1;a[i];i++)
        {
            if(max<a[i])
            max=a[i];
        }
        cout<<endl<<"Max element is "<<max;
    }

    void findMinElement()
    {
        int min=a[0];
        for(int i=1;a[i];i++)
        {
            if(min>a[i])
            min=a[i];
        }
        cout<<endl<<"Min element is "<<min;
    }

    void sort()
    {
        int temp;
        for(int i=0;i<9;i++)
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    void editElement(int index,int newData)
    {
        a[index-1]=newData;
    }

    void sumOfElements()
    {
        int sum=0;
        for(int i=0;a[i];i++)
        sum+=a[i];
        cout<<endl<<"Sum of all elements in array is "<<sum;
    }
     void averageofElements()
     {
         int sum=0;
         float avg;
         for(int i=0;a[i];i++)
         sum+=a[i];
         avg=sum/10;
         cout<<endl<<"Average of all elements in array is "<<avg;
     }
};

int main()
{
    Array a1;
    a1.inputArrayElements();
    a1.displayArray();
    a1.findMinElement();
    a1.findMaxElement();
    a1.sort();
    cout<<endl<<"Sorted elements are: ";
    a1.displayArray();
    a1.editElement(5,20);
    cout<<endl<<"Array with changed elment at 5th position is :";
    a1.displayArray();
    a1.sumOfElements();
    a1.averageofElements();
}