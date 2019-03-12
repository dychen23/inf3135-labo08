// labo08.c
// Auteur: Alexandre Lachapelle
// Programme test pour une Queue
// INF3135 - Mars 2019

#include <stdio.h>
#include "queue.h"


int main(int argc, char *argv[])
{
 
   Queue q = createQ(5); 

	if(isEmptyQ(&q)) printf("est vide\n");

   return 0;
}
