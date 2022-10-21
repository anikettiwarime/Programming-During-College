#include <stdio.h>

void TOH(int , char , char , char );

int main()
{
    int n;
    char A = 'A';
    char B = 'B';
    char C = 'C';

    TOH(4, A, B, C);
}

void TOH(int n, char beg, char aux, char end)
{
    if (n > 0)
    {
        TOH(n - 1, beg, end, aux);
        printf("\n %c -> %c", beg, end);
        TOH(n - 1, aux, beg, end);
    }
}