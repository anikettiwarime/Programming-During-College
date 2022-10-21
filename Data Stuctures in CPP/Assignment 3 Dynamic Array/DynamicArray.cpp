#include <iostream>
#include <conio.h>
using namespace std;
class ArrayADT
{
    private:
        int capacity;
        int lastindex;
        int *ptr;
    public:
        int getCapcity(){return capacity;}
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
        void doubleArray()
        {
            int *temp=NULL;
            temp= new int[capacity*2];
            for (int i = 0; i <= lastindex; i++)
                temp[i]=ptr[i];
            delete []ptr;
            ptr=temp;
            capacity*=2;      
        }
        void halfArray()
        {
            int *temp=NULL;
            temp=new int[capacity/2];
            for (int i = 0; i <= lastindex; i++)
                temp[i]=ptr[i];
            delete ptr;
            ptr=temp;
            capacity=(capacity/2)+(capacity%2);        
        }
        void append(int data)
        {
            if(lastindex+1==capacity)
                doubleArray();
            lastindex++;
            ptr[lastindex]=data;
        }
        void insert(int index,int data)
        {
            if (index<0 || index>lastindex+1)
                {
                    cout<<"Invalid Index !\n";
                }
            else
            {
                if (lastindex+1==capacity)
                    doubleArray();
                if(index==lastindex+1)
                    ptr[index]=data;
                else
                    for (int i = lastindex; i >= index; i--)
                    {
                        ptr[i+1]=ptr[i];
                        ptr[index]=data;
                    }
                    lastindex++;
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
                cout<<"Invalid index"<<endl;
            else
            {
                for (int i = index; i < lastindex; i++)
                    ptr[i]=ptr[i+1];
                lastindex--;
                if(capacity/2==lastindex+1)
                    halfArray();         
            }       
        }
        void EditItem(int index,int data)
        {
            if(index<0 || index>lastindex)
                cout<<"Invalid index"<<endl;
            else
                ptr[index]=data;
        }
        void display()
        {
            cout<<"\nArray is :";
            for(int i = 0; i <= lastindex; i++)
                cout<<" "<<ptr[i];
        }
        void searchItem(int item)
        {
            for (int i = 0; i <= lastindex; i++)
                if (item == ptr[i])
                   {
                       cout<<item<<" is at index "<<i;
                       return;
                   }
            cout<<"Data not found";
        }
        ~ArrayADT()
        {
            delete []ptr;
        }
};
int menu()
{
    int choice;
    cout<<"\n1. Append";
    cout<<"\n2. Insert";
    cout<<"\n3. Delete";
    cout<<"\n4. Edit";
    cout<<"\n5. SearchItem";
    cout<<"\n6. Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    return choice;
}
int main()
{
    int x,y;
    ArrayADT a(2);
    while (1)
    {
        system("cls");
        cout<<"Capacity : "<<a.getCapcity()<<endl;
        cout<<"Total values stored : "<<a.count();
        a.display();
        cout<<endl<<"_______________________________________________________________________";
        switch (menu())
        {
            case 1:
            cout<<"Enter Number to add\n";
            cin>>x;
            a.append(x);
                break;
            case 2:
            cout<<"Enter index Number\n";
            cin>>x;
            cout<<"Enter Number to insert\n";
            cin>>y;
            a.insert(x,y);
                break;
            case 3:
            cout<<"Enter index to delete\n";
            cin>>x;
            a.deleteItem(x);
                break;
            case 4:
            cout<<"Enter index to edit\n";
            cin>>x;
            cout<<"Enter NewData\n";
            cin>>y;
            a.EditItem(x,y);
                break;
            case 5:
            cout<<"Enter Number to search\n";
            cin>>x;
            a.searchItem(x);
                break;
            case 6:
                exit(0);
        default:
        cout<<"Invalid choice \nretry";
        getch();
            break;
        getch();
        }
    }
}