// queue.c
// Auteur: Alexandre Lachapelle
// INF3135 - Mars 2019

#include "queue.h"

Queue createQ(const int capacity)
{
   Queue Q;
   return Q;
}

bool isEmptyQ(const Queue *Q)
{
return Q == NULL;

}

void enqueueQ(Queue *Q, int content)
{

Q->front=content;
}

int dequeueQ(Queue *Q)
{
return 0;
}

int frontQ(Queue *Q)
{
return 0;
}

void deleteQ(Queue *Q)
{

}
