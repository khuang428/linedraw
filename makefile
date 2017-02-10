all: display.o draw.o main.o
	gcc display.o draw.o main.o
display.o: display.c display.h
	gcc -c display.c
draw.o: draw.c draw.h
	gcc -c draw.c
main.o: main.c ml6.h
	gcc -c main.c
run: all
	./a.out
clean:
	rm *.o *~
	rm a.out lines.png
	rm *#
