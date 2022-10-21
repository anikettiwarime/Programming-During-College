#include <stdio.h>
#include <string.h>
struct Book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    struct Book b1;
    b1.bookid=100;
    strcpy(b1.title,"Aniket");
    b1.price=200.25;
    printf("%d %s %.3f",b1.bookid,b1.title,b1.price);
}