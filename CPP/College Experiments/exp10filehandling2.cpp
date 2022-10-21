#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string s1;
	ifstream in;
	in.open("ConstructorFile.txt", ios::in);
	cout << "File Opened Successfully\n";
	while (in)
	{
		in >> s1;
		if (s1 == "Roll")
			cout << endl;
		cout << s1 << " ";
	}
	in.close();
	return 0;
}
