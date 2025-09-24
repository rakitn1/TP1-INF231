// fichier 5: test_trie.c 
#include <stdio.h>
 int main() { int arr[5] = {1,2,3,4,5}; int sorted = 1;
for(int i=0;i<4;i++){
if(arr[i] > arr[i+1]){
sorted = 0;
break;
}
}
if(sorted) printf("Tableau trie\n");
else printf("Tableau non trie\n");
return 0;
 }