main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp interface.hpp utils.hpp

clean: 
	rm *.o *.hpp.gch main
