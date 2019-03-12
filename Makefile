OPTIONS = -Wall -pedantic -std=c99 -lm -O1

default:labo08

queue.o: queue.h queue.c
	gcc $(OPTIONS) -c queue.h queue.c

labo08: queue.o labo08.c
	gcc $(OPTIONS) queue.o labo08.c -o lab8

clean:
	rm -rf *.o
	rm -f lab8
	rm -f queue.h.gch
push:
	git add .
	git commit -m "."
	git push
