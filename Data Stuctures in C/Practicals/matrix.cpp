#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], result[3][3] = { 0 }, i, j, k;


    //First matrix
    cout << "-----------------------------------------------------------\nEnter values in first Matrix\n" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0;j < 3;j++)
        {
            cout << "Enter value in " << i+1 << " row " << j+1 << " column " << endl;
            cin >> a[i][j];
        }
    }

    

    
    //Second Matrix
    cout << "\n-----------------------------------------------------------\nEnter values in Second Matrix\n" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0;j < 3;j++)
        {
            cout << "Enter value in " << i+1 << " row " << j+1 << " column " << endl;
            cin >> b[i][j];
        }
    }

    cout << "\nFirst Matrix is : ";
    
    for (i = 0; i < 3; i++)
    {
        cout << endl;
        for (j = 0;j < 3;j++)
            cout << a[i][j]<<" ";
    }

    cout << "\nSecond Matrix is : ";
    for (i = 0; i < 3; i++)
    {
        cout << endl;
        for (j = 0;j < 3;j++)
            cout << b[i][j]<<" ";
    }

    //Multiplication of two marices
    for (i = 0;i < 3;i++)
        for (j = 0;j < 3;j++)
            for (k = 0;k < 3;k++)
                result[i][j] = result[i][j] + a[i][k] * b[k][j];


    cout << "\n------------------------------------------------\nResult Matrix is : ";
    for (i = 0; i < 3; i++)
    {
        cout << endl;
        for (j = 0;j < 3;j++)
            cout << result[i][j]<<" ";
    }
}