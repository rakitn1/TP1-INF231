// fichier 2: produit_matrices.c #include <stdio.h> #define ROW 3 #define COL 3
int main() { int A[ROW][COL], B[ROW][COL], C[ROW][COL] = {0};
for(int i=0;i<ROW;i++)
for(int j=0;j<COL;j++)
scanf("%d",&A[i][j]);
for(int i=0;i<ROW;i++)
for(int j=0;j<COL;j++)
scanf("%d",&B[i][j]);


for(int i=0;i<ROW;i++)
for(int j=0;j<COL;j++)
for(int k=0;k<COL;k++)
C[i][j] += A[i][k] * B[k][j];


for(int i=0;i<ROW;i++){
for(int j=0;j<COL;j++)
printf("%d ",C[i][j]);
printf("\n");
}
return 0;
}