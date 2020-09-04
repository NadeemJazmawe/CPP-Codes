#!make -f

all: demo
	./demo

demo: PhoneticFinder.o main.o
	clang++-9 -std=c++2a PhoneticFinder.o main.o -o demo

main.o: main.cpp
	clang++-9 -std=c++2a --compile main.cpp -o main.o

PhoneticFinder.o: PhoneticFinder.cpp
	clang++-9 -std=c++2a --compile PhoneticFinder.cpp -o PhoneticFinder.o

PhoneticFinder.o: PhoneticFinder.hpp 

main.o: PhoneticFinder.hpp


clean:
	rm -f *.o demo test
