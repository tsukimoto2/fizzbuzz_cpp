# Makefile

fizzbuzz: fizzbuzz.o main.o
	g++ -o fizzbuzz fizzbuzz.o main.o

fizzbuzz.o: fizzbuzz.cpp
	g++ -c fizzbuzz.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f fizzbuzz fizzbuzz.o main.o
