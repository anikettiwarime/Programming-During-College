#include <iostream>
#include<algorithm>
using namespace std;


void hammingCode() {
    int a[30], b[30], c[30], d[30];
    int i, j, len;
    int count1 = 0, count2 = 0, count3 = 0;
    cout << "Enter length of code : " << endl;
    cin >> len;
    cout << "Enter 1st code : " << endl;
    for (i = 1; i <= len; i++)
    {
        cin >> a[i];
    }
    cout << "Enter 2nd code : " << endl;
    for (i = 1; i <= len; i++)
    {
        cin >> b[i];
    }
    cout << "Enter 3rd code : " << endl;
    for (i = 1; i <= len; i++)
    {
        cin >> c[i];
    }
    for (i = 1; i <= len; i++)
    {
        if (a[i] != b[i])
        {
            count1++;
        }
    }
    cout << "Hamming distance between 1st codeword & 2nd codeword is = " << count1 << endl;
    for (i = 1; i <= len; i++)
    {
        if (a[i] != c[i])
        {
            count2++;
        }
    }
    cout << "Hamming distance between 1st codeword & 3rd codeword is = " << count2 << endl;
    for (i = 1; i <= len; i++)
    {
        if (b[i] != c[i])
        {
            count3++;
        }
    }
    cout << "Hamming distance between 2nd codeword & 3rd codeword is = " << count3 << endl;
    cout << "Minimum hamming distance is : " << std::min({ count1,count2,count3 }) << "\n";
}

void parity() {
    int n, parity = 0;
    cout << "Enter data length : " << endl;
    cin >> n;
    int a[n];
    cout << "Enter data : " << endl;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
        if (a[i] == 1)
            parity++;
    }
    if (parity % 2 == 0)
        cout << "even parity" << endl;
    else
        cout << "odd parity" << endl;
}

int main()
{

    cout << endl << "1.Hamming Code.";
    cout << endl << "2.Parity check.";
    cout << endl << "Enter your choice :";
    int x;
    cin >> x;
    if (x == 1)
        hammingCode();
    if (x == 2)
        parity();
}
