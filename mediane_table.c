// fichier 6: mediane_tableau.c 
#include <stdio.h> 
#include <stdlib.h>

int compare(const void a, const void b){ return ((int)a - (int)b); }

int main() { int arr[5] = {3,1,4,5,2}; qsort(arr, 5, sizeof(int), compare);
int median = arr[5/2];
printf("La mediane est %d\n", median);
return 0;
}