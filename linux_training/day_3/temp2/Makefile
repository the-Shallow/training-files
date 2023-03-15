CC=gcc 

one:add.o sub.o file1.o
	$(CC) file1.o add.o sub.o -o output

file1.o:file1.c -include file.h
	$(CC) -c file1.c

add.o:add.c -include file.h
	$(CC) -c add.c

sub.o:sub.c -include file.h
	$(CC) -c sub.c

clean:
	rm -rf output
