all: main.o welcome.o action_selection.o failure.o help.o read_text.o treatment_text.o output_treatment_text.o
	gcc -std=c99 main.o welcome.o action_selection.o failure.o help.o read_text.o treatment_text.o output_treatment_text.o -o cw
main.o: main.c welcome.h action_selection.h
	gcc -c main.c
welcome.o: welcome.c welcome.h
	gcc -c welcome.c
action_selection.o: action_selection.c action_selection.h failure.h help.h read_text.h treatment_text.h output_treatment_text.h
	gcc -c action_selection.c
failure.o: failure.c failure.h
	gcc -c failure.c
help.o: help.c help.h
	gcc -c help.c
read_text.o: read_text.c read_text.h
	gcc -c read_text.c
treatment_text.o: treatment_text.c treatment_text.h
	gcc -c treatment_text.c
output_treatment_text.o: output_treatment_text.c output_treatment_text.h
	gcc -c output_treatment_text.c
clean:
	rm *.o
	rm cw
