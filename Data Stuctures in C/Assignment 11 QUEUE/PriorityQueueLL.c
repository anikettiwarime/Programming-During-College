#include <stdio.h>
#include <stdlib.h>

struct PriorityQueue
{
    int item;
    int prNo;
    struct PriorityQueue* next;
};
typedef struct PriorityQueue PriorityQueue;

void insert(PriorityQueue** start, int prNo, int data)
{
    PriorityQueue* new = malloc(sizeof(PriorityQueue));
    new->item = data;
    new->prNo = prNo;
    if ((*start) == NULL)
    {
        new->next = NULL;
        (*start) = new;
    }
    else  
    {
        if (prNo > (*start)->prNo)
        {
            new->next = (*start);
            (*start) = new;
        }
        else
        {
            PriorityQueue* temp = (*start);
            PriorityQueue* temp2 = (*start);
            while (temp->next!=NULL)
            {
                if (prNo > temp->prNo)
                    break;
                temp2 = temp;
                temp = temp->next;
            }
            if (temp->next == NULL)
            {
                new->next = NULL;
                temp->next = new;
            }
            else
            {
                new->next = temp;
                temp2->next = new;
            }
        }
    }
}

void delete(PriorityQueue** start)
{
    if ((*start) == NULL)
        printf("\nUnderflow");
    else
    {
        PriorityQueue* temp = (*start);
        *start = (*start)->next;
        free(temp);
    }
}

void display(PriorityQueue* start)
{
    if (start == NULL)
    {
        printf("\nUnderflow");
        return;
    }
        PriorityQueue* temp = start;
    while (temp)
    {
        printf("\nData = %d, Priority no =  %d", temp->item, temp->prNo);
        temp = temp->next;
    }
}

int main()
{
    PriorityQueue* start=NULL;
    insert(&start, 1, 10);
    insert(&start, 2, 20);
    insert(&start, 4, 40);
    insert(&start, 5, 50);
    insert(&start, 5, 55);
    insert(&start, 3, 30);
    display(start);
    
    printf("\n");
    delete(&start);
    display(start);
    
    printf("\n");
    delete(&start);
    display(start);
    
    printf("\n");
    delete(&start);
    display(start);
    
    printf("\n");
    delete(&start);
    display(start);
    
    printf("\n");
    delete(&start);
    display(start);

    delete(&start);
}