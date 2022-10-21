#include<iostream>
using namespace std;
class Student {
	int roll_no;
public:
	void inputnumber() {
		cout << "\nEnter roll number : ";
		cin >> roll_no;
	}
	void shownumber() {
		cout << "\nRoll No : " << roll_no;
	}
};
class Test : virtual public Student {
public:
	int m1, m2, m3;
	void entermarks() {
		cout << "Enter marks of English : ";
		cin >> m1;
		cout << "Enter marks of Science : ";
		cin >> m2;
		cout << "Enter marks of Mathematics : ";
		cin >> m3;
	}
	void showmarks() {
		cout << "\nMarks of English : " << m1;
		cout << "\nMarks of Science : " << m2;
		cout << "\nMarks of Mathematics : " << m3;
	}
};
class Sports : public virtual Student {
public:
	int score;
	void enterscore() {
		cout << "Enter marks of Sports(out of 100) : ";
		cin >> score;
	}
	void showscore() {
		cout << "\nMarks of Sports(out of 100) : " << score;
	}
};
class Result : public Test, public Sports {
	int total;
	int avg;
public:
	void display()
	{
		total = m1 + m2 + m3 + score;
		avg = total / 4;
		shownumber();
		showmarks();
		showscore();
		cout << "\nTotal marks : " << total;
		cout << "\nAvg marks : " << avg;
	}
};
int main()
{

	int c;
	cout << "Enter number of Student to Enroll: ";
	cin >> c;
	Result obj[c];
	for (int i = 0;i < c;i++)
	{
		cout << "---------------------------------------------------------";
		obj[i].inputnumber();
		obj[i].entermarks();
		obj[i].enterscore();
	}
	for (int i = 0;i < c;i++)
	{
		cout << "---------------------------------------------------------";
		obj[i].display();
		cout << endl;
	}
	return 0;
}
