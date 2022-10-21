/*
Experiment no 01
Name : Aniket Balendra Tiwari
Roll No : 21143285
Perform multiplication of 2D array
*/
#include <iostream>
using namespace std;
int main()
{
	int a[3][3], b[3][3], result[3][3] = { 0 };
	for (int i = 0;i < 3;i++)
		for (int j = 0;j < 3;j++)
		{
			cout << "Enter Value in " << i + 1 << " row and " << j + 1 << " column \n";
			cin >> a[i][j];
		}

	cout << "First matrix is :\n";
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}


	for (int i = 0;i < 3;i++)
		for (int j = 0;j < 3;j++)
		{
			cout << "Enter Value in " << i + 1 << " row and " << j + 1 << " column \n";
			cin >> b[i][j];
		}


	cout << "Second matrix is :\n";
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
			cout << b[i][j] << " ";
		cout << "\n";
	}

	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			for (int k = 0;k < 3;k++)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	cout << "Result matrix is :\n";
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
			cout << result[i][j] << " ";
		cout << "\n";
	}
	return 0;
}

/*
OUTPUT :
Enter Value in 1 row and 1 column
1
Enter Value in 1 row and 2 column
2
Enter Value in 1 row and 3 column
3
Enter Value in 2 row and 1 column
4
Enter Value in 2 row and 2 column
5
Enter Value in 2 row and 3 column
6
Enter Value in 3 row and 1 column
7
Enter Value in 3 row and 2 column
8
Enter Value in 3 row and 3 column
9
First matrix is :
1 2 3
4 5 6
7 8 9
Enter Value in 1 row and 1 column
9
Enter Value in 1 row and 2 column
8
Enter Value in 1 row and 3 column
7
Enter Value in 2 row and 1 column
6
Enter Value in 2 row and 2 column
5
Enter Value in 2 row and 3 column
4
Enter Value in 3 row and 1 column
3
Enter Value in 3 row and 2 column
2
Enter Value in 3 row and 3 column
1
Second matrix is :
9 8 7
6 5 4
3 2 1
Result matrix is :
30 24 18
84 69 54
138 114 90

--------------------------------
Process exited after 14.46 seconds with return value 0
Press any key to continue . . .
*/







/*
STRINGS
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
	string s1, s2;
	char c, pos;
	int i;
	cout << "\nEnter first string";
	cin >> s1;
	cout << "\nEnter second string";
	cin >> s2;
	//1.Concatinate two strings
	string result = s1 + " " + s2;
	cout << "\nconcated string " << result;

	//2.Add character to strings
	cout << "\n\nEnter Character that you want to insert\n";
	cin >> c;
	s1 += c;
	cout << "\nAfter Adding Char String 1 Becomes = " << s1;

	//3.Remove character from string
	cout << "\nEnter  chracter to remove\n";
	cin >> pos;
	for (i = 0;s1[i] != '\0';i++)
		if (s1[i] == pos)
			s1.erase(s1.begin() + i);
	cout << "\nAfter Deletion Character String 1 becomes=" << s1;
	return 0;
}

/*

OUTPUT
Enter first string
ANIKET
Enter second string
TIWARI
Concated strings ANIKETTIWARI

Enter Character that you want to insert
I

After Adding Char String 1 Becomes = ANIKETTIWARII
Enter  chracter to remove
I

After Deletion Character String 1 becomes=ANKETTWARI
--------------------------------
Process exited after 21.64 seconds with return value 0
Press any key to continue . . .
*/


/*
STRUCTURE
Experiment no 01
Name : Aniket Balendra Tiwari
Roll No : 21143285
Implement Program for structure for student record
*/


#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int RollNO, TotalMarks;
	float Percentage;
	int MATHS, SCIENCE, ENGLISH;
};

int main()
{
	int n, i;
	cout << "Enter the number of students \n";
	cin >> n;
	student s[n];
	for (i = 0;i < n;i++)
	{
		cout << "Enter Student Name \n";
		cin >> s[i].name;
		cout << "Enter Reg Number \n";
		cin >> s[i].RollNO;
		cout << "Enter  Mark for MATHS \n";
		cin >> s[i].MATHS;
		cout << "Enter  Mark for SCIENCE \n";
		cin >> s[i].SCIENCE;
		cout << "Enter  Mark for ENGLISH \n";
		cin >> s[i].ENGLISH;
		s[i].TotalMarks = s[i].MATHS + s[i].SCIENCE + s[i].ENGLISH;
		s[i].Percentage = s[i].TotalMarks / 3;
	}

	for (i = 0;i < n;i++)
	{
		cout << "\nStudent Name is :" << s[i].name;
		cout << "\nReg No  :" << s[i].RollNO;
		cout << "\nMATHS MARKS : " << s[i].MATHS;
		cout << "\nSCIENCE MARKS : " << s[i].SCIENCE;
		cout << "\nENGLISH MARKS : " << s[i].ENGLISH;
		cout << "\nTotal Marks :" << s[i].TotalMarks;
		cout << "\nPercentage : " << s[i].Percentage << "%\n";
	}
	return 0;
}


/*
Enter the number of students
3
Enter Student Name
ANIKET
Enter Reg Number
21143285
Enter  Mark for MATHS
89
Enter  Mark for SCIENCE
88
Enter  Mark for ENGLISH
87
Enter Student Name
PRANAV
Enter Reg Number
21143277
Enter  Mark for MATHS
92
Enter  Mark for SCIENCE
91
Enter  Mark for ENGLISH
90
Enter Student Name
BHUSHAN
Enter Reg Number
21143288
Enter  Mark for MATHS
90
Enter  Mark for SCIENCE
96
Enter  Mark for ENGLISH
87

Student Name is :ANIKET
Reg No  :21143285
MATHS MARKS : 89
SCIENCE MARKS : 88
ENGLISH MARKS : 87
Total Marks :264
Percentage : 88%

Student Name is :PRANAV
Reg No  :21143277
MATHS MARKS : 92
SCIENCE MARKS : 91
ENGLISH MARKS : 90
Total Marks :273
Percentage : 91%

Student Name is :BHUSHAN
Reg No  :21143288
MATHS MARKS : 90
SCIENCE MARKS : 96
ENGLISH MARKS : 87
Total Marks :273
Percentage : 91%
--------------------------------
Process exited after 61.19 seconds with return value 0
Press any key to continue . . .
*/
