// queue.c
// Auteur: Alexandre Lachapelle
// INF3135 - Mars 2019

#include "queue.h"

Queue createQ(const int capacity)
{
   Queue Q;
   
  Q.capacity = capacity;
  Q.size = 0;

   return Q;
}

bool isEmptyQ(const Queue *Q)
{
	return (Q->size == 0); 
}

void enqueueQ(Queue *Q, int content)
{
	if(Q->size < Q->capacity){
		Q->rear = (Q->rear+1) % Q->capacity;
		Q->elements[Q->rear] = content;
		Q->size = Q->size+1;
	}
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
