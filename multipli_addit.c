// fichier 4: multiplication_additions.c 
#include <stdio.h> 
int main() { int a, b, result = 0;
 printf("Entrer a et b: "); scanf("%d %d",&a,&b);
for(int i=0;i<b;i++){
int temp = 0;
for(int j=0;j<a;j++) temp++;
result += temp;
}
printf("Produit = %d\n", result);
return 0;
}