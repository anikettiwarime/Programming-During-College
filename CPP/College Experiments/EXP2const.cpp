#include <iostream>
using namespace std;

class ClassA
{

public:
    ClassA()// Constructor
    {
        cout << "\nObject is Created Successfully" << endl;
    }

    ~ClassA()//Destructor
    {
        cout << "\nObject is Destroyed Successfully" << endl;
    }
};

void check()
{
    cout << "Functions contructor & Destructor called\n";
    ClassA B;
}

int main()
{
    ClassA A;
    check();
    cout << "In main()" << endl;
    return 0;
}