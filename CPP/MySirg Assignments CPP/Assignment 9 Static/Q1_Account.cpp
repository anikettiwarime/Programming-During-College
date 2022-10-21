#include <iostream>
using namespace std;
class Account
{
    //variables
    private:
    int account_no;
    float balance;
    static float roi;

    //setters
    public:
    void set_acc_no(int x)
    {
        account_no=x;
    }
    void set_balance(float x)
    {
        balance=x;
    }

    static void set_rate_of_interest(float x)
    {
        roi=x;
    }

    //Getters
    int get_account_no(){return account_no;}
    float get_balance(){return balance;}
    static float get_rate_of_interest(){return roi;}
};

float Account::roi;// Initializing static member of class Account

int main()
{
    Account a1;
    a1.set_acc_no(1223);
    a1.set_balance(10000);
    a1.set_rate_of_interest(5);
    cout<<"Account No="<<a1.get_account_no()<<endl;
    cout<<"Balance="<<a1.get_balance()<<endl;
    cout<<"Rate of interest="<<Account::get_rate_of_interest();
}
