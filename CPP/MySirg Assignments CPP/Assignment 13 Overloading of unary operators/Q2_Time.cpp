#include <iostream>
using namespace std;
class Time
{
    private:
    int h,m,s;
    public:
    void setTime(int hr,int min,int sec)
    {
        h=hr;
        m=min;    
        s=sec;
        normalise();
    }
    void showTime()
    {
        cout<<endl<<h<<":"<<m<<":"<<s;
    }
    void normalise()
    {
        m+=s/60;
        s%=60;
        h+=m/60;
        m%=60;
    }
    void operator!()
    {
        if(h!=0 && m!=0 && s!=0)
        {
            h=0;
            m=0;
            s=0;
        }
        else
        {
            h=1;
            m=0;
            s=0;
        }
    }
    Time operator++()       //preincrement
    {
        Time temp;
        temp.s=++s;
        temp.h=h;
        temp.m=m;
        temp.normalise();
        normalise();
        return temp;
    }    
    Time operator++(int)    //postincrement
    {
        Time temp;
        temp.s=s++;
        temp.m=m;
        temp.h=h;
        temp.normalise();
        normalise();
        return temp;
    }
};
int main()
{
    
}