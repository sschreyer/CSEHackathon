CC=gcc
CFLAGS=-Wall -Werror -g
OBJS=main.o Tree.o Postcode.o ad.o


covid : $(OBJS)
	$(CC) -o covid $(OBJS)

main.o: main.c Tree.h Postcode.h ad.h

Tree.o: Tree.c Postcode.h ad.h
Postcode.o: Postcode.c ad.h
ad.o: ad.c ad.h
