#include <bits/stdc++.h>
using namespace std;

string XorOperation(string data, string generator)
{
    cout << "Data to be Xored : " << data;
    int genlenth = generator.length();
    string subStr = data.substr(0, genlenth);
    int j = genlenth - 1;
    cout << endl << "Initial String : " << subStr;

    int len = data.length();

    int runned = 0;
    while (j < len)
    {
        runned++;
        if (j != genlenth - 1)
        {
            subStr += data[j];
            subStr = subStr.substr(1, genlenth);
        }
        if (subStr[0] == '0')
        {
            cout << endl << "String : " << subStr << " Skipped " << j << " ";
            j++;
            continue;
        }
        string s;
        for (int i = 0;i < genlenth;i++)
        {
            generator[i] == subStr[i] ? s += '0' : s += "1";
        }
        subStr = s;
        cout << endl << "String : " << subStr;
        j++;
    }
    subStr = subStr.substr(1, genlenth);
    cout << "\nRemainder : " << subStr << "\n\n";
    return subStr;

}

string crc()
{
    string data, generator;
    cout << "Enter data bits : ";
    cin >> data;
    cout << "Enter generator bits : ";
    cin >> generator;

    string poly(generator.length() - 1, '0');
    string encoded = data + poly;
    cout << "-------- Sender ---------- \n";
    string rem = XorOperation(encoded, generator);
    cout << "\n----------- Receiver --------- \n";

    // string ans = XorOperation(data + SenderRem, generator);

    string sender = data + rem;

    string receiver;
    cout << "Enter first " << data.size() << " data bits  : ";
    cin >> receiver;

    receiver = XorOperation(receiver + rem, generator);

    string ans;

    if (sender != receiver)
        ans = "No Errors Detected";
    else
        ans = "Error detected";

    return ans;
}



int main()
{
    cout << "Name : Aniket Tiwari" << endl;
    cout << crc();
    return 0;
}