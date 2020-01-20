#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"Trie.h"

int main(int argc, char* argv[]) {
 trie* root;
 root = read_text();
if ( (argc == 2) && (argv[1][0]=='r' || argv[1][0]=='R') ) {
print_trie_reverse(root);
}
else{
 print_trie(root);
}
 free_trie(root);
 return 0;
}
