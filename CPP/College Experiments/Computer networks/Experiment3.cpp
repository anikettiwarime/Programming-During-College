#include<bits/stdc++.h>
using namespace std;
void characterCount()
{
    int n, a[100], j = 0, k, end_f, start_f = 0;
    string str;
    cout << "Enter the string data:";
    cin >> str;
    n = str.length();
    for (int i = 0;i < n;i++)
    {
        a[i] = int(str[i]) - 48;
    }
    int i = 0, f_count = 0;
    end_f = a[0];
    while (i < n)
    {
        f_count++;
        cout << "The " << f_count << " frame contain " << a[j] << " char:" << endl;
        for (j = start_f;j < end_f;j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
        start_f = j;
        end_f = end_f + a[start_f];
        i = start_f;
    }
}

void bitStuffing()
{
    string s;
    cin >> s;
    string stuffed = "0111110 ";
	int count = 0;
	for(int i = 0; i < s.size(); i++)
	{
		stuffed += s[i];
		if(s[i] == '1')
		{
			count++;
		}
		else
		{
			count = 0;
		}
		if(count == 5)
		{
			stuffed += '0';
			count = 0;
		} 
	}
	stuffed += " 0111110";
	cout<<stuffed<<endl;
}

int main()
{
    int ch = 0;
    cout << "Aniket Tiwari\n" << endl;
    do
    {
        cout << "1.Character count \n2.bitstuffing \n3.Character stuffing\nEnter choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            characterCount();
            break;
        }
        case 2:
            bitStuffing();
            break;
        case 3:
        {
            char a[30], b[4] = "dle";
            int count = 0, n, p, i;
            cin.ignore();
            cout << "Enter the frame to be sent : ";
            cin.getline(a, 30);
            n = strlen(a);
            cout << "Length of frame is : " << n << endl;
            cout << "dlestx";
            for (int i = 0; i < n; i++)
            {
                count = 0;
                for (int j = 0; j < 3; j++)
                {
                    if (a[i] == b[j])
                    {
                        count++;
                        i++;
                    }
                }

                if (count == 3)
                    cout << "dledle";
                else
                    cout << a[i];
            }
            cout << a[(n + 2) - count - i]
                ; cout << "dleetx\n";
            break;
        }
        }
    } while (ch < 4);
    return 0;
}