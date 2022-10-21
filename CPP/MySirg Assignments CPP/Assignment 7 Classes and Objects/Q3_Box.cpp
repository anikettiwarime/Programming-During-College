#include <iostream>
using namespace std;
class Box
{
    private:
    int l,b,h; 
    public:
    void setDimensions(int x ,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    void Display()
    {
        cout<<"Length="<<l<<" Breadth="<<b<<" Height="<<h<<endl;
    }
    int volume()
    {
        return l*b*h;
    }
};
int main()
{
    Box b1;
    b1.setDimensions(10,15,12);
    b1.Display();
    cout<<b1.volume();
}