hepsi:derle calistir

derle:DoubleLinkedList.o Node.o Test.o
	g++ ./lib/DoubleLinkedList.o ./lib/Node.o ./lib/Test.o -o ./bin/Test

DoubleLinkedList.o:
	g++ -I "./include/" -o ./lib/DoubleLinkedList.o -c ./src/DoubleLinkedList.cpp 

Node.o:
	g++ -I "./include/" -o ./lib/Node.o -c ./src/Node.cpp 

Test.o:
	g++ -I "./include/" -o ./lib/Test.o -c ./src/Test.cpp 

calistir:
	./bin/Test

