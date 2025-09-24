#include <stdio.h>

// Définir les dimensions des matrices (3x3 pour cet exemple)
#define ROW 3
#define COL 3

// Fonction pour lire une matrice depuis l'entrée utilisateur
void lireMatrice(int matrice[][COL], int lignes, int colonnes) {
    // Parcourir chaque élément de la matrice
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            // Lire un entier et vérifier si l'entrée est valide
            if (scanf("%d", &matrice[i][j]) != 1) {
                printf("Erreur : Entrée invalide pour la matrice\n");
                return;
            }
        }
    }
}

// Fonction pour calculer le produit de deux matrices
void produitMatrices(int A[][COL], int B[][COL], int C[][COL], int lignesA, int colonnesA, int colonnesB) {
    // Vérifier que les dimensions sont valides
    if (lignesA <= 0 || colonnesA <= 0 || colonnesB <= 0) {
        printf("Erreur : Dimensions invalides\n");
        return;
    }
    
    // Calculer C[i][j] = somme(A[i][k] * B[k][j]) pour chaque i, j
    for (int i = 0; i < lignesA; i++) {
        for (int j = 0; j < colonnesB; j++) {
            C[i][j] = 0; // Initialiser C[i][j] à 0 avant accumulation
            for (int k = 0; k < colonnesA; k++) {
                C[i][j] += A[i][k] * B[k][j]; // Ajouter le produit A[i][k] * B[k][j]
            }
        }
    }
}

// Fonction pour afficher une matrice
void afficherMatrice(int matrice[][COL], int lignes, int colonnes) {
    // Parcourir chaque élément et l’afficher
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", matrice[i][j]); // Afficher l’élément
        }
        printf("\n"); // Nouvelle ligne après chaque rangée
    }
}

int main() {
    // Déclarer les matrices A, B et C
    int A[ROW][COL], B[COL][ROW], C[ROW][ROW];

    // Vérifier les dimensions
    if (ROW <= 0 || COL <= 0) {
        printf("Erreur : Dimensions des matrices non valides\n");
        return 1; // Quitter avec un code d’erreur
    }

    // Lire la matrice A
    printf("Entrez les elements de la matrice A (%d x %d) :\n", ROW, COL);
    lireMatrice(A, ROW, COL);

    // Lire la matrice B
    printf("Entrez les elements de la matrice B (%d x %d) :\n", COL, ROW);
    lireMatrice(B, COL, ROW);

    // Calculer le produit C = A * B
    produitMatrices(A, B, C, ROW, COL, ROW);

    // Afficher la matrice résultat C
    printf("Matrice C (produit A * B) :\n");
    afficherMatrice(C, ROW, ROW);

    return 0; // Succès
}
