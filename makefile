main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp interface.h utils.h

clean: 
	rm *.o *.h.gch main
