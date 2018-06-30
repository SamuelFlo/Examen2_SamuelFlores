
exe:	main.o nodo.o seleccion.o lista.o
	g++ nodo.o seleccion.o lista.o main.o -o exe

main.o:	main.cpp lista.h nodo.h seleccion.h
	g++ -c main.cpp

nodo.o:	nodo.h seleccion.h
	g++ -c nodo.cpp 
seleccion.o:	seleccion.h
	g++ -c seleccion.cpp
lista.o:	lista.h nodo.h seleccion.h
	g++ -c lista.cpp
