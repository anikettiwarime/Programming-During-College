#include <iostream>
using namespace std;
class Result
{
    private:
    int total_attempt, net_right, net_wrong, marks_for_right, marks_for_wrong;

    public:
    void setResult(int total_attempt,int net_right,int net_wrong,int marks_for_right=0,int marks_for_wrong=0)
    {
        total_attempt=total_attempt;
        net_right=net_right;
        net_wrong=net_wrong;
        marks_for_right=marks_for_right;
        marks_for_wrong=marks_for_wrong;
    }
    void showResult()
    {
        cout<<"Total Attempts="<<total_attempt<<endl;
        cout<<"Net Right="<<net_right<<endl;
        cout<<"Net Wrong="<<net_wrong<<endl;
        cout<<"Marks for Right="<<marks_for_right<<endl;
        cout<<"Marks for Wrong="<<marks_for_wrong<<endl;
    }
};