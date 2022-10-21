#include <stdio.h>
#include <conio.h>

//Bubble sort
void bubblesort(int a[], int size)
{
    int temp;
    for (int round = 1; round < size; round++)
        for (int i = 0;i < size - round;i++)
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
}

//Modified bubble sort
void mbubblesort(int a[], int size)
{
    int temp;
    for (int round = 1; round < size; round++)
    {
        int flag = 0;
        for (int i = 0;i < size - round;i++)
            if (a[i] > a[i + 1])
            {
                flag++;
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        if (flag == 0)
        {
            printf("%d rounds\n", round);
            break;
        }
    }
}

//Selection sort
void selectionSort(int a[], int size)
{
    int round, i, j, min, k;
    for (round = 0;round < size;round++)
        for (i = round;i < size;i++)
        {
            min = a[i];
            for (j = i;j < size;j++)
            {
                if (min > a[j])
                    min = a[j];
            }
            for (k = i;k < size;k++)
            {
                if (a[k] == min)
                    break;
            }
            a[k] = a[i];
            a[i] = min;
        }
}

//Insertion sort
void insertionsort(int a[], int size)
{
    for (int round = 1;round < size;round++)
    {
        int j = round - 1;
        int valve = a[round];
        while (valve < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = valve;
    }
}

void merge(int A[], int l, int m, int u)
{
    int L[m - l + 1], R[u - m], i, j, k;
    for (i = 0;i < m - l + 1;i++)
        L[i] = A[l + i];
    for (j = 0;j < u - m;j++)
        R[j] = A[m + 1 + j];
    for (k = l, i = 0, j = 0;i < m - l + 1 && j < u - m;k++)
    {

        if (L[i] < R[i])

        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
    while (i < m - l + 1)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < u - m)
    {
        A[k] = R[j];
        j++;
        k++;
    }

}
void merge_sort(int A[], int l, int u)
{
    int m;

    if (l < u)
    {
        m = (l + u) / 2;
        merge_sort(A, l, m);
        merge_sort(A, m + 1, u);
        merge(A, l, m, u);
    }
}

int main()
{
    int a[10] = { 40,20,50,10,30 , 100, 90, 60, 70, 80 };

    merge_sort(a, 0, 9);

    printf("\n");
    for (int i = 0;i < 10;i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}