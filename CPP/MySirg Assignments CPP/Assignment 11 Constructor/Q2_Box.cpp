#include <iostream>
using namespace std;
class Box
{
    private:
    int length,breadth,height;
    public:
    void setDimension(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    void showDimensions()
    {
        cout<<"Length="<<length<<" Breadth="<<breadth<<" Height="<<height<<endl;
    }
    Box()
    {
        length=0;
        breadth=0;
        height=0;
    }
    Box(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    Box(int dimension)
    {
        length=dimension;
        breadth=dimension;
        height=dimension;
    }
};
int main()
{
    Box b1,b2(5,8,9),b3(6);
    b1.showDimensions();
    b1.setDimension(5,6,7);
    b1.showDimensions();
    b2.showDimensions();
    b3.showDimensions();
}