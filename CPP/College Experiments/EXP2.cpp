#include <iostream>
using namespace std;

class Complex
{
private:
	int real, imaginary;
public:
	void input()
	{
		cout << "Enter Real Part" << endl;
		cin >> real;
		cout << "Enter Imaginary Part" << endl;
		cin >> imaginary;
	}

	//Setters
	void setData(int a, int b)
	{
		real = a;
		imaginary = b;
	}

	void setReal(int data)
	{
		real = data;
	}

	void setImaginary(int data)
	{
		imaginary = data;
	}

	//Getters
	int getreal()
	{
		return real;
	}

	int getimaginary()
	{
		return imaginary;
	}

	//Display Function
	void display()
	{
		cout << real << " + " << imaginary << "i" << endl;
	}

	friend Complex Sum(Complex, Complex);
};

Complex Sum(Complex C1, Complex C2)
{
	Complex Temp;
	Temp.real = C1.real + C2.real;
	Temp.imaginary = C1.imaginary + C2.imaginary;
	return Temp;
}

int main()
{
	cout<<"Name : Aniket Tiwari\nRollNo : 21143285\n"<<endl;
	Complex c1, c2, c3;
	cout << "Enter Value of First Complex Numbers" << endl;
	c1.input();
	cout << "Enter Value of Second Complex Numbers" << endl;
	c2.input();
	c3 = Sum(c1, c2);
	cout << endl << "Value of First Complex Numbers :";
	c1.display();
	cout << endl << "Value of First Complex Numbers :";
	c2.display();
	cout << endl << "Value After adding two Complex Numbers :";
	c3.display();
	return 0;
}
