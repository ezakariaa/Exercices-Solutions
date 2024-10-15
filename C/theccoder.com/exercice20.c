#include <stdio.h>

// Déclaration du prototype de la fonction Somme
int Somme(int a, int b);

int main() {
    int num1, num2, resultat;

    // Lecture des deux entiers
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);

    printf("Entrez le second entier : ");
    scanf("%d", &num2);

    // Appel de la fonction Somme
    resultat = Somme(num1, num2);

    // Affichage du résultat
    printf("La somme de %d et %d est : %d\n", num1, num2, resultat);

    return 0;
}

// Définition de la fonction Somme
int Somme(int a, int b) {
    return a + b;  // Retourne la somme des deux entiers
}

