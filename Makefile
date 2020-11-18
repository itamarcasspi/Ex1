FLAGS= -Wall -g
CC = gcc
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
	
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
	
mymaths: power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o
		
mymathd: power.o basicMath.o
	$(CC)  -shared -o libmyMath.so power.o basicMath.o

mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
		
maind: main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

.PHONEY: clean all

clean: 
	rm -f *.o *.a *.so maind mains
	
	
all: mains maind mymaths mymathd


