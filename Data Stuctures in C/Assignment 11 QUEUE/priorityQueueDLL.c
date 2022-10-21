#include <stdio.h>
#include <stdlib.h>

struct Pnode {
    struct Pnode* prev;
    int item;
    int prNo;
    struct Pnode* next;
};

typedef struct Pnode PrQueue;

void insert(PrQueue** last, int prNo, int data)
{
    PrQueue* new = malloc(sizeof(PrQueue));
    new->item = data;
    new->prNo = prNo;

    if ((*last) == NULL)
    {
        new->next = new;
        new->prev = new;
        (*last) = new;
        printf("\nTest 1");
    }
    else
    {
        if ((*last)->prNo < prNo) // FOR highest priority
        {
            new->next = (*last)->next;
            new->prev = (*last);
            (*last) = new;
            printf("\nTest case 2");
        }
        else
        {
            PrQueue* temp = (*last)->next;
            while (temp->prNo < prNo)
            {
                if (temp->next == (*last))
                {
                    break;
                }
                temp = temp->next;
            }
            if (temp->prNo < prNo)
            {
                new->next = temp;
                new->prev = temp->prev;
                temp->prev = new;
            }
            else
            {
                new->next = temp->next;
                new->prev = temp;
            }
        }
    }
}


void display(PrQueue* last)
{
    PrQueue* temp = last->next;
    printf("\n1");
    while (temp != last)
    {
        printf("\nData = %d, priority = %d", temp->item, temp->prNo);
        temp = temp->next;
        getch();
    }
    printf("\nData = %d priority = %d", temp->item, temp->prNo);
    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------");
}

int main()
{
    PrQueue* last = NULL;
    insert(&last, 4, 10); // 1
    display(last);
    insert(&last, 5, 20); // 2
    display(last);
    // insert(&last, 1, 30); // 3
    // display(last);
    // insert(&last, 6, 30); // 4
    // display(last);
    // //printf("\n\n");
    // insert(&last, 2, 40);
    // display(last);
    // insert(&last, 5, 50);
    // printf("\n\n");
    // display(last);
    
    return 0;
}