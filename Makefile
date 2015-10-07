CC = g++ $(CFLAGS)
CFLAGS = -g -O0 -Wall

all: sm

sm: sm.o SortMachine.o
	$(CC) -o sm sm.o SortMachine.o

sm.o: sm.cpp
	$(CC) -c sm.cpp

SortMachine.o: SortMachine.cpp
	$(CC) -c SortMachine.cpp

clean:
	rm -f *.o sm
