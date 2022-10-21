#include <iostream>
using namespace std;
class Time
{
    private:
    int h,m,s;
    public:
    void setTime(int x,int y,int z)
    {
        h=x; m=y; s=z;
        normalise();
    }
    void showTime()
    {
        cout<<endl<<h<<":"<<m<<":"<<s;
    }
    void normalise()
    {
       m=m+s/60;
       s=s%60;
       h=h+m/60;
       m=m%60;
    }
    Time operator+(Time t)
    {
        Time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        temp.normalise();
        return temp;
    }
    Time operator-(Time t)
    {
        Time temp;
        temp.h=h-t.h;
        temp.m=m-t.m;
        temp.s=s-t.s;
        temp.normalise();
        return temp;
    }
    bool  operator>(Time t)
    {
        if(h>t.h)
        return true;
        else if(h<t.h)
        return false;
        else if(m>t.m)
        return true;
        else if(m<t.m)
        return false;
        else if(s>t.s)
        return true;
        else 
        return false;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(3,120,125);
    t1.showTime();
}