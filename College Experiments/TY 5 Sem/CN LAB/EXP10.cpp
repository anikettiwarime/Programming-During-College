#include <iostream>
using namespace std;
void checkBinary()
{
    cout << "Enter Ip Address : ";
    string ip;
    cin >> ip;
    if (ip[0] == '0')
        cout << "Class A\n";
    else if (ip[0] == '1' && ip[1] == '0')
        cout << "Class B\n";
    else if (ip[0] == '1' && ip[1] == '1' && ip[2] == '0')
        cout << "Class C\n";
    else if (ip[0] == '1' && ip[1] == '1' && ip[2] == '1' && ip[3] == '0')
        cout << "Class D\n";
    else
        cout << "Class E\n";
}


void checkNumerical()
{
    cout << "Enter Ip Address : ";
    string ip;
    cin >> ip;

    string s;

    for (int i = 0;i < ip.size();i++) {
        if (ip[i] == '0')
            break;
        s += ip[i];
    }
    int n = stoi(s);

    if (n < 128)
        cout << "Class A\n";
    else if (n < 192)
        cout << "Class B\n";
    else if (n < 224)
        cout << "Class C\n";
    else if (n < 240)
        cout << "Class D\n";
    else
        cout << "Class E\n";
}


int main()
{
    int choice;
    cout << "\n1.Input IP in binary.\n2.Enter IP in numberical form\nEnter Your choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
        checkBinary();
        break;
    case 2:
        checkNumerical();
        break;

    default:
        cout << "Invalid Choice";
        break;
    }

    return 0;
}