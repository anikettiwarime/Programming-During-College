#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s1;
    int point;
    ifstream in;
    in.open("ConstructorFile.txt", ios::in);
    cout << "File Opened  Successfully";
    while (in)
    {
        cout << "\nEnter point to display : ";
        cin >> point;
        in.seekg(point);
        in >> s1;
        cout << s1 << " ";
    }
    in.close();
    return 0;
}
