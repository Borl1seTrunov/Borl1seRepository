all: main.o welcome.o action_selection.o failure.o help.o read_text.o output_text.o free_memory.o
	gcc -std=c99 main.o welcome.o action_selection.o failure.o help.o read_text.o output_text.o free_memory.o -o cw
main.o: main.c welcome.h action_selection.h
	gcc -c main.c
welcome.o: welcome.c welcome.h
	gcc -c welcome.c
action_selection.o: action_selection.c action_selection.h failure.h help.h read_text.h output_text.h free_memory.h
	gcc -c action_selection.c
failure.o: failure.c failure.h
	gcc -c failure.c
help.o: help.c help.h
	gcc -c help.c
read_text.o: read_text.c read_text.h
	gcc -c read_text.c
output_text.o: output_text.c output_text.h
	gcc -c output_text.c
free_memory.o:	free_memory.c free_memory.h
	gcc -c free_memory.c
clean:
	rm *.o
	rm cw
