#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NUM_LETTERS ((int)26)

typedef enum {False=0, True=1} boolean;

typedef struct node {
 char letter;
 long unsigned int count;
 boolean is_word;
 boolean has_kids;
 struct node* children[NUM_LETTERS];
} node;

typedef struct trie {
 node* children[NUM_LETTERS];
 node* current;
 boolean empty;
 int max_word_length;
 char* word;
} trie;


node* new_node(void);
node* initialize_node(node* n,char letter);
node* create_node(char letter) ;
void free_node(node* n) ;
trie* new_trie(void);
trie* initialize_trie(trie* t);
trie* create_trie(void);
void close_word(trie* root);
boolean is_empty(trie* root);
int read_character(trie* root, int c); 
void allocate_word(trie* root);
trie* read_text() ;
void print_words_reverse(trie* root) ;
void print_trie_reverse(trie* root) ;
void print_words(trie* root) ;
void print_trie(trie* root);
void free_trie(trie* t) ;




