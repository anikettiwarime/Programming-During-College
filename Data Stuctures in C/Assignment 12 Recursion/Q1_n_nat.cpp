#include <stdio.h>

//Functions  1 Question remaining
int nnat(int);              //1
int nrev(int);              //2
int neven(int);             //3
int n_even_rev(int);        //4
int n_odd(int);             //5
int n_odd_rev(int);         //6
int n_nat_sum(int);         //7
int n_even_sum(int);        //8
int n_odd_sum(int);         //9
int n_nat_sum_square(int);  //10
int sum_of_digit(int);      //11
int dec_to_bin(int);        //12
int dec_to_oct(int);        //13
int rev_digit(int);         //14
int fib(int);               //15

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    // printf("%d", dec_to_bin(n));
    dec_to_bin(n);
}


//Q1
int nnat(int n)
{
    if (n == 1)
    {
        printf("%d ", n);
        return n;
    }
    printf("%d ", nnat(n - 1)+1);
    return n;
}

//Q2
int nrev(int n)
{
    if (n == 0)
        return n;
    printf("%d ", n);
    nrev(n - 1);
    return n;
}

//Q3
int neven(int n)
{
    int x;
    if (n == 0)
        return n;
    x=neven(n - 1);
    printf("%d ", (x * 2)+2);
    return n;
}

//Q4
int n_even_rev(int n)
{
    if (n == 0)
        return 0;
    printf("%d ", n * 2);
    n_even_rev(n - 1);
    return 0;
}

//Q5
int n_odd(int n)
{
    int x;
    if (n == 0)
        return n;
    x = n_odd(n - 1);
    printf("%d ", (x * 2) + 1);
    return n;
}

//6
int n_odd_rev(int n)
{
    if(n==0)
    {
        return n;
    }
    printf("%d ", (n * 2) - 1);
    n_odd_rev(n - 1);
    return n;
}

//7
int n_nat_sum(int n)
{
    if (n == 1)
        return n;
    n = n + n_nat_sum(n - 1);
    return n;
}

//8
int n_even_sum(int n)
{
    int x;
    if (n == 0)
        return n;
    x= n*2+ n_even_sum(n - 1);
    return x;
}

//9
int n_odd_sum(int n)
{
    int x;
    if (n == 0)
        return n;
    x =( n*2 -1)+n_odd_sum(n - 1);
    return x;
}

//10
int n_nat_sum_square(int n)
{
    int x;
    if (n == 1)
        return n;
    x = n_nat_sum_square(n - 1);
    return x+(n * n);
}

//Q11
int sum_of_digit(int n)
{
    int x;
    if (n == 0)
        return n;
    x = n % 10;
    x+=sum_of_digit(n / 10);
    return x;
}

//Q12
int dec_to_bin(int n)
{
    if (n == 0)
        return n;
    dec_to_bin(n / 2);
    printf("%d", n % 2);
    return n;
}

//Q13
int dec_to_oct(int n)
{
    if (n == 0)
        return n;
    dec_to_oct(n / 8);
    printf("%d ", n % 8);
    return n;
}

//14
int rev_digit(int n)
{
    if (n == 0)
        return n;
    printf("%d", n % 10);
    rev_digit(n / 10);
    return n;
}

//Q15
int fib(int n)
{
    if (n <= 1 )
        return n;
    return fib(n - 1) + fib(n - 2);
}