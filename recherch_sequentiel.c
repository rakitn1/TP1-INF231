// fichier 3: recherche_sequentielle.c
  #include <stdio.h> 
int main() { 
int arr[5] = {1, 3, 5, 7, 9}; int x, found = 0; 
printf("Entrer element a rechercher: "); scanf("%d",&x);
for(int i=0;i<5;i++){
if(arr[i]==x){
found = 1;
printf("Element trouve a l'indice %d\n", i);
break;
}
}
if(!found) printf("Element non trouve\n");
return 0;
}