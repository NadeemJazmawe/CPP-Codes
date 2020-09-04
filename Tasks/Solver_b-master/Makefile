#!make -f

all: demo
	./demo

demo: solver.o main.o
	clang++-9 -std=c++2a solver.o main.o -o demo

main.o: main.cpp
	clang++-9 -std=c++2a --compile main.cpp -o main.o

solver.o: solver.cpp
	clang++-9 -std=c++2a --compile solver.cpp -o solver.o

solver.o: solver.hpp 

main.o: solver.hpp


clean:
	rm -f *.o demo test
