#Makefile
all: add_nbo

add-nbo: add_nbo.c
	g++ -o add_nbo add_nbo.c

clean:
	rm -f add_nbo
	rm -f *.o
