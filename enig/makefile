enig:main.o enig.o 
	gcc   main.o enig.o -o enig -lSDL -lSDL_image
main.o:main.c
	gcc -c main.c -g

enig.o:enig.c
	gcc -c enig.c -g 
gcc main.c -o testsdl sdl-config --libs --cflags
