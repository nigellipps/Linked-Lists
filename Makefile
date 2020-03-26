ll: main.o LinkedList.o
	g++ main.o LinkedList.o -o ll

main.o: main.cpp
	g++ -c main.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -c LinkedList.cpp

clean:
	rm *.o ll
