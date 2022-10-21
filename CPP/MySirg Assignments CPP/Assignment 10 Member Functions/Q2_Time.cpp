#include <iostream>
using namespace std;
class Time
{
    private:
    int hour;
    int min;
    int sec;
    public:
    void setTime(int a,int b,int c)
    {
        hour=a;
        min=b;
        sec=c;
    }
    void showTime()
    {
        normalize();
        cout<<hour<<":"<<min<<":"<<sec<<endl;
    }

    void normalize()
    {
        if(min>=60)
        {
            hour++;
            min=min-60;
        }
        if(sec>=60)
        {
            min++;
            sec-=60;
        }
    }

    Time add(Time t)
    {
        Time temp;
        temp.hour=hour+t.hour;
        temp.min=min+t.min;
        temp.sec=sec+t.sec;
        temp.normalize();
        return temp;
    }
    Time subtact(Time t)
    {
        Time temp;
        temp.hour=hour-t.hour;
        temp.min=min-t.min;
        temp.sec=sec-t.sec;
        temp.normalize();
        return temp;
    }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(2,65,65);
    t1.showTime();
    t2.setTime(1,25,65);
    t2.showTime();
    t3=t1.add(t2);
    t3.showTime();
    t3=t2.subtact(t1);
    t3.showTime();
}