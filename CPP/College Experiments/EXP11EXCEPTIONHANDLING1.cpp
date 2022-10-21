#include<iostream>
#include<string.h>
using namespace std;

int stack[5];
int top = -1;
void push()
{
    int x;
    if (top >= 4)
        throw('a');	//throw point    
    else
    {
        cout << "Enter element to push\n";
        cin >> x;
        top++;
        stack[top] = x;
        cout << "Element Inserted\n";
    }
}
void pop()
{

    if (top == -1)
    {
        throw(top);	//throw point 
    }
    else
    {
        cout << stack[top] << " Element Poped";
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        throw(top);	//throw point 
    }
    for (int i = 0;i <= top;i++)
    {
        cout << "\n" << stack[i];
    }
}
int main()
{
    int ch;
    cout << "1.Push ";
    cout << "\n2.Pop";
    cout << "\n3.Display";
    cout << "\n4.exit";
    do
    {
        cout << "\nEnter choice ";
        cin >> ch;
        try			//try block start 
        {
            switch (ch)
            {
            case 1:
                push();	//calling function who generate throw point 
                break;

            case 2:
                pop();	//calling function who generate throw point 
                break;

            case 3:
                display();//calling function who generate throw point 
                break;
            case 4:
                break;

            default:
                cout << "Invalid choice pls retry";
            }
        }
        catch (char a)	//catch block
        {
            cout << "\nTop : " << top<<"\nOverflow";
        }
        catch (int t)	//another catch block
        {
            cout << "\nTop=" << t;
            cout << "\nUnderflow";
            cout << " Stack is empty\n";
        }
    } while (ch < 4);
}