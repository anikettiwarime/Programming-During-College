#include <iostream>
using namespace std;
class ArrayADT
{
    private:
        int capacity;
        int lastindex;
        int *ptr;
    public:
        ArrayADT(int cap)
        {
            capacity=cap;
            lastindex=-1;
            ptr= new int[cap];
        }
        void createArray(int cap)
        {
            capacity=cap;
            lastindex=-1;
            ptr= new int[cap];
        }
        void append(int data)
        {
            if(lastindex+1==capacity)
                cout<<"Array is Full";
            else
            {
                lastindex++;
                ptr[lastindex]=data;
            }
        }
        void insert(int index,int data)
        {
            if (index<0 || index>lastindex+1)
                cout<<"Invalid Index !\n";
            else if (lastindex+1==capacity)
                cout<<"Array Full\n";
            else
            {
                for (int i = lastindex; i >= index; i--)
                    ptr[i+1]=ptr[i];
                lastindex++;
                ptr[index]=data;
            }          
        }
        int count()
        {
            return lastindex+1;
        }
        int getItem(int index)
        {
            if(index<0 || index>capacity-1)
                cout<<"Invalid index"<<endl;
            else 
            if(index>lastindex)
                cout<<"No item at given index"<<endl;
            else
                return ptr[index];
        }
        void deleteItem(int index)
        {
            if (index<0 || lastindex<index)
                cout<<"Invalid index";
            else
            {
                for (int i = index; i < lastindex; i++)
                    ptr[i]=ptr[i+1];
                lastindex--;                
            }       
        }
        void EditItem(int index,int data)
        {
            if(index<0 || index>lastindex)
                cout<<"invalid index"<<endl;
            else
                ptr[index]=data;
        }
        void display()
        {
            cout<<"\nArray is :";
            for(int i = 0; i <= lastindex; i++)
                cout<<" "<<ptr[i];
        }
        bool searchItem(int item)
        {
            for (int i = 0; i < lastindex; i++)
                if (item == ptr[i])
                    return true;
                return false;
        }
};
int main()
{
    ArrayADT a(5);
    a.append(150);
    a.append(250);
    a.append(350);
    a.append(450);
    a.insert(4,20);
    a.display();
    cout<<"\nTotal item : "<<a.count();
    a.deleteItem(2);
    a.display();
    a.append(100);
    a.display();
    a.EditItem(3,500);
    a.display();
}