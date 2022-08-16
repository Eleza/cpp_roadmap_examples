CC = g++
CFLAGS = -wall -g

main: main.o BasicOperations.o

main.o: main.cpp
BasicOperations.o: BasicOperations.hpp BasicOperations.cpp
