// Queue.h
// Auteur: Alexandre Lachapelle
// INF3135 - Mars 2019

#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdbool.h>

// struct Queue
// int capacity: Combien d'elements peut contenir la queue (espace alloue)
// int size: Combien d'elements sont dans la queue (espace utilise)
// int front: index de l'element de tete
// int rear: index de l'element de fin
// int* elements: ptr vers l'array dynamique des elements

typedef struct Queue {
        int capacity;
        int size;
        int front;
        int rear;
        int *elements;
} Queue;

// createQ
// Creee et initialise la queue
// Param:
//  (const int) capacity: Le nombre d'elements maximum de la queue
// Retour:
//  (Queue) La Queue créée
Queue createQ(const int capacity);

// isEmptyQ
// Verifie si la queue est vide
// Param:
//  (const Queue *) Q: Ptr vers la queue a verifier
// Retour:
//  (bool): true si aucun element
bool isEmptyQ(const Queue *Q);

// enqueueQ
// Ajoute un element a la fin de la queue
// Param:
//  (Queue *) Q: La queue en question
//  (int) content: l'element a ajouter
void enqueueQ(Queue *Q, int content);

// dequeueQ
// Retire l'element en tete
// Param
//  (Queue *) Q: La queue en question
// retour
//  (int) L'element retire
int dequeueQ(Queue *Q);

// frontQ
// Donne l'element en tete
// Param
//  (Queue *) Q: Queue en question
// Retour
//  (int) L'element de tete, si vide, -1.
int frontQ(Queue *Q);

// deleteQ
// Detruit et desalloue la queue
// Param
//  (Queue *) Q: la queue a desallouer
void deleteQ(Queue *Q);


#endif //__QUEUE_H__

