linked: main.o LinkedList.o
	g++ main.o LinkedList.o -o linked

main.o: main.cpp
	g++ -c main.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -c LinkedList.cpp

clean:
	rm *.o linked
