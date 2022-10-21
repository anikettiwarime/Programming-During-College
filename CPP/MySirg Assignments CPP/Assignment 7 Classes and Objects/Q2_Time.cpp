#include <iostream>
using namespace std;
class Time
{
private:
    int hr,min,sec;
public:
void normalize()
{
    if (sec>=60)
        {
            sec-=60;
            min++;
        }

        if (min>=60)
        {
            min-=60;
            hr++;
        }
}
    void setTime(int x,int y,int z)
    {
        hr=x;
        min=y;
        sec=z;   
        normalize();    
    }

    void showTime()
    {
        cout<<hr<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
    }
    void inputTime()
    {
        cin>>hr>>min>>sec;
        normalize();
    }

    Time operator+(Time t)
    {
        Time temp;
        temp.hr=hr+t.hr;
        temp.min=min+t.min;
        temp.sec=sec+t.sec;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.inputTime();
    t1.showTime();
    t2.inputTime();
    t2.showTime();
    t3=t1+t2;
    t3.showTime();
}
