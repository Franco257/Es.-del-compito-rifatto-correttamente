CFLAGS=-DDEBUG

all: main 

clean: main main.o math.o pow.o 
	rm -rf main main.o math.o pow.o

main: main.o math.o pow.o
	gcc -o main main.o math.o pow.o

main.o: main.c math.h pow.h trace.h
	gcc -c -o main.o main.c

math.o: math.c math.h trace.h
	gcc $(CFLAGS) -c -o math.o math.c  

pow.o: pow.c pow.h trace.h
	gcc $(CFLAGS) -c -o pow.o pow.c

