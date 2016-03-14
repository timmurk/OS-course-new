all: release

cat.o: cat.c
	gcc cat.c -o cat.o -c

cat: cat.o
	gcc cat.o -o cat -s

release: cat
	rm -f cat.o

clean:
	rm -f cat cat.o

rebuild: clean all