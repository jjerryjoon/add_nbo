#Makefile
all: add-nbo

add-nbo: add-nbo.c
	g++ -o add-nbo add-nbo.c

clean:
	rm -f add-nbo
	rm -f *.o
