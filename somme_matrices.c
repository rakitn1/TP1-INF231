// fichier 1: somme_matrices.c #include <stdio.h> #define ROW 3 #define COL 3

int main() { int A[ROW][COL], B[ROW][COL], C[ROW][COL];
printf("Entrer les elements de la matrice A :\n");
for(int i=0;i<ROW;i++)
for(int j=0;j<COL;j++)
scanf("%d",&A[i][j]);


printf("Entrer les elements de la matrice B :\n");
for(int i=0;i<ROW;i++)
for(int j=0;j<COL;j++)
scanf("%d",&B[i][j]);


for(int i=0;i<ROW;i++)
for(int j=0;j<COL;j++)
C[i][j] = A[i][j] + B[i][j];


printf("Somme des matrices :\n");
for(int i=0;i<ROW;i++){
for(int j=0;j<COL;j++)
printf("%d ",C[i][j]);
printf("\n");
}
return 0;
}