HEADERS = 
CFLAGS = -g -Wall

default: type_sizes

type_sizes.o: type_sizes.c $(HEADERS)
	gcc $(CFLAGS) -c type_sizes.c -o type_sizes.o

type_sizes: type_sizes.o
	gcc type_sizes.o -o type_sizes

clean:
	-rm -f type_sizes.o
	-rm -f type_sizes
