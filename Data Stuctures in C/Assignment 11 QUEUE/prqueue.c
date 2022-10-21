#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct PriorityQueue
{
    int capacity;
    int *front,*rear;
    int prange;
    int **ptr;
};
typedef struct PriorityQueue PrQueue;

PrQueue* createPrqueue(int pRange,int cap)
{
    PrQueue *PQ;
    PQ=(PrQueue*)malloc(sizeof(PrQueue));
    PQ->capacity=cap;
    PQ->prange=pRange;
    PQ->front=(int*)malloc(sizeof(int)*pRange);
    PQ->rear=(int*)malloc(sizeof(int)*pRange);
    PQ->ptr=(int*)malloc(sizeof(int*)*pRange); // for storing array of pointers
    for(int i=0;i<pRange;i++)
    {
        PQ->ptr[i]=(int*)malloc(sizeof(int)*cap);
        PQ->front[i]=-1;
        PQ->rear[i]=-1;
    }
    return PQ;
}

// void Enqueue(PrQueue *pq,int priority,int data)
// {
//     int p=priority-1;
//     if(pq->prange<priority)
//         return;
//     if(pq->rear[p]+1==pq->capacity && pq->front[p]==0 || pq->rear[p]+1==pq->front[p])
//     {
//         printf("FULL for this priority");
//         return;
//     }
//     else if(pq->rear[p]==-1)
//     {
//         pq->front[p]++;
//         pq->rear[p]++;
//         pq->ptr[p][0]=data;
//     }
//     else if()
// }