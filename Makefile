HEADERS = funciones.h

default: tarea2.out

tarea2.o: tarea2.c $(HEADERS)
	gcc -c tarea2.c -o tarea2.o

tarea2.out: tarea2.o
	gcc tarea2.o -o tarea2.out

clean:
	-rm -f tarea2.o
	-rm -f tarea2.out
