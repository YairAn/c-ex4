CC=gcc

FLAGS= -Wall -g

all: frequency
frequency: main.o Trie.o
	$(CC) $(FLAGS) -o frequency main.o Trie.o
main.o: main.c Trie.h
	$(CC) $(FLAGS) -c main.c
Trie.o: Trie.c Trie.h
	$(CC) $(FLAGS) -c Trie.c

clean:
	rm frequency

.PHONY: clean all frequency
