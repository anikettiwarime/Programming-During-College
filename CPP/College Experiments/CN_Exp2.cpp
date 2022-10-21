#include<bits/stdc++.h>
using namespace std;

void bitStuffing( string s)
{
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

void charCount(string s)
{
	int n = s.size();
	string stuff = "";
	stuff += s;
	cout<<n+1<<stuff<<endl;
}

void charStuff(string s)
{
	string stuff = "DLE STX";
	for(int i = 0; i < s.size(); i++)
	{
		stuff += s[i];
		if((i+1)%3==0)
		{
			stuff += "DLE";
		}
	}
	stuff += " ETX";
	cout<<stuff<<endl;
}
int main()
{
	cout<<"Enter the bit : ";
	string s;
	cin>>s;
	cout<<"1. Bit Stuffing \n";
	cout<<"2. Charector Count \n";
	cout<<"3. Charector Stuffing \n";
	cout<<"Enter Choice : ";
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1: bitStuffing(s);
				break;
		case 2: charCount(s);
				break;
		case 3: charStuff(s);
				break;
	}
	return 0;
}


//1. survey device
//2. commands
//3. framming methods
//4. hamming distace
//5. crc 
//6.
//7. back n go
