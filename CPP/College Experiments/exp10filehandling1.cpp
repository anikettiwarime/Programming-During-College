#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream in("ConstructorFile.txt", ios::out);//Opening file using constructor
    cout << "File Opened Successfully";
    in << "AKSHAY TUPE\n";
    in << "Roll no : 20141232";
    in.close();
    return 0;
}
