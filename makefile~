all: test.o song_node.o library.o
	gcc test.o song_node.o library.o

test.o: test.c song_node.h library.h
	gcc -c test.c

song_node.o: song_node.c song_node.h
	gcc -c song_node.c

library.o: library.c library.h
	gcc -c library.c

run: a.out
	./a.out
