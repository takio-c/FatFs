VPATH = ../src

all: size_test
	
size_test: main.o ff.o diskio.o
	gcc -g main.o ff.o diskio.o -o size_test

main.o: main.c ff.h Makefile
	gcc -g -c main.c

ff.o: ff.c ff.h ffconf.h Makefile
	gcc -g -c $(VPATH)/ff.c

diskio.o: diskio.c diskio.h Makefile
	gcc -g -c $(VPATH)/diskio.c

.PHONY: clean
clean:
	rm -rf *.o size_test
