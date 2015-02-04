CC=gcc
CFLAGS=-pthread

all: copy copy2

copy2: copy2.o
	$(CC) $(CFLAGS) copy2.o -o copy2

copy2.o: copy2.c
	$(CC) $(CFLAGS) -c copy2.c

copy: copy.o
	$(CC) $(CFLAGS) copy.o -o copy

copy.o: copy.c
	$(CC) $(CFLAGS) -c copy.c

clean:
	rm *.o copy
