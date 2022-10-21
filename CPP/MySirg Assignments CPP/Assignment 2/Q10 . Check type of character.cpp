//Type of given character
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character to check"<<endl;
    cin>>ch;

    if(int(ch)<48)
        cout<<ch<<" is special character";

    else if(int(ch)>47 && int(ch)<58)
        cout<<ch<<" is Digit";

    else if(int(ch)>64 && int(ch)<97)
        cout<<ch<<" is uppercase alphabet";

    else if(int(ch)>96 && int(ch)<123)
        cout<<ch<<" is lowercase alphabet";
}
