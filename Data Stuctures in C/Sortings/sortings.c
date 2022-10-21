#include <stdio.h>
void bubblesort(int a[], int size)
{
    int round, i, temp;
    for (round = 0; round < size - 1; round++)
        for ( i = 0; i < size-round-1; i++)
            if (a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i + 1] = temp;
            }
}

void Modifiedbubblesort(int a[], int size)
{
    int round, i, temp,flag,j=1;
    for (round = 0; round < size - 1; round++)
    {
        flag = 0;
        for (i = 0; i < size - round - 1; i++)
            if (a[i] > a[i + 1])
            {
                flag = 1;
                temp = a[i];
                a[i] = a[i+1];
                a[i + 1] = temp;
            }
        if (flag == 0)
            break;
        printf("rounds = %d\n", j);
        j++;
    }
}

void selection_sort(int a[], int size)
{
    int i, t, min_index;
    
    
    
}

int main()
{
    //indexing : 0  1  2  3  4  5  6
    //   Array : 40 30 20 60 50 10 90
    
    int a[7] = { 40,30,20,60,50,10,90 };

    char s[] = "ANIKET";
    printf("%s value ", s);
    s=rev(s[]);

    printf("%s value ", s);
    return 0;
}

char* rev(char s[])
{
    int i,l;
    for (i = 0;s[i]; i++);
    l = i;

    for (i = l / 2;s[i]; i--)
    {
        char c;
        c = s[i];
        s[i] = s[l - i];
        s[l - i] = s[i];
    }
    return s;
}