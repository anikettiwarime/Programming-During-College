#include <stdio.h>
#include <stdlib.h>

struct PriorityQueue
{
    int prNo;
    int* front, * rear;
    int capcity;
    int currentcap;
    int** ptr;
};
typedef struct PriorityQueue PrQueue;

PrQueue* createQueue(int PrNo, int cap)
{
    PrQueue* Pq;
    Pq = malloc(sizeof(PrQueue));
    Pq->capcity = cap;
    Pq->currentcap = -1;
    Pq->prNo = PrNo;
    Pq->front = malloc(sizeof(PrQueue) * PrNo);
    Pq->rear = malloc(sizeof(PrQueue) * PrNo);
    Pq->ptr = malloc(sizeof(int*) * PrNo);
    printf("\nTEST 1 Pass");
    for (int i = 0; i < PrNo; i++)
    {
        Pq->ptr[i] = malloc(sizeof(int) * cap);
        Pq->front[i]=-1;
        Pq->rear[i]=-1;
    }
     printf("\nTEST 2 Pass");
    return Pq;
}

void insert(PrQueue* pq, int priority, int data)
{
    if (pq->currentcap == pq->capcity - 1)
    {
        printf("Queue Full");
        return;
    }
    else if (pq->prNo < priority)
    {
        printf("Invalid Priority number");
    }
    else
    {
        pq->rear[];
        pq->ptr[priority][pq->rear] = data;
        pq->currentcap++;
        printf("\nData Inserted Succesfully");
    }
}

int main()
{
    PrQueue *PQ;
    PQ = createQueue(3, 7);
    insert(PQ, 0, 10);
    return 0;
}