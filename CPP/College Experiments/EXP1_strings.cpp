/*
Experiment no 01
Name : Aniket Balendra Tiwari
Roll No : 21143285
Implement Program for string operations
1.Concatinate two strings
2.Add character to strings
3.Remove character from string
*/

#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	char c,pos;
	int i;
	cout<<"Enter first string\n";
	cin>>s1;
	cout<<"Enter second string\n";
	cin >> s2;
	//1.Concatinate two strings
	string result = s1 + s2;
	cout << "Concated strings " << result;
	
	//2.Add character to strings
	cout<<"\n\nEnter Character that you want to insert\n";
	cin>>c;
	result+=c;
	cout << "\nAfter Adding Char String 1 Becomes = " << result;
	
	//3.Remove character from string
	cout << "\nEnter  chracter to remove\n";
	cin>>pos;
	for(i=0;i<result.length();i++)
		if(result[i]==pos)
			result.erase(result.begin() + i);
	cout<<"\nAfter Deletion Character String 1 becomes="<<result;
	return 0;
}
