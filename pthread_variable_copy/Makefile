CC=gcc
CFLAGS=-pthread

all: copy

copy: copy.o
	$(CC) $(CFLAGS) copy.o -o copy

copy.o: copy.c
	$(CC) $(CFLAGS) -c copy.c

clean:
	rm *.o copy
