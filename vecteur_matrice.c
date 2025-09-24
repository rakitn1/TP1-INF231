// fichier 9: vecteur_par_matrice.c 
 #include <stdio.h> 
#define ROW 3 #define COL 3

int main() { int v[ROW], M[ROW][COL], R[COL]={0};
for(int i=0;i<ROW;i++) scanf("%d",&v[i]);
for(int i=0;i<ROW;i++)
for(int j=0;j<COL;j++)
scanf("%d",&M[i][j]);


for(int j=0;j<COL;j++)
for(int i=0;i<ROW;i++)
R[j] += v[i]*M[i][j];


for(int j=0;j<COL;j++) printf("%d ",R[j]);
return 0;
}