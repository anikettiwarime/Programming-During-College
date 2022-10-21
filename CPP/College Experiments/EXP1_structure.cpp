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
	int n,i;
	cout<<"Enter the number of students \n";
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
		cout << "\nPercentage : " << s[i].Percentage<<"%\n";
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
