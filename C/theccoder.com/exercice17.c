#include <stdio.h>

int main() {
    int num1, num2, somme;
    int *ptr1, *ptr2;

    // Lecture des deux entiers
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);

    printf("Entrez le second entier : ");
    scanf("%d", &num2);

    // Initialisation des pointeurs
    ptr1 = &num1;
    ptr2 = &num2;

    // Calcul de la somme en utilisant les pointeurs
    somme = *ptr1 + *ptr2;

    // Affichage du résultat
    printf("La somme de %d et %d est : %d\n", *ptr1, *ptr2, somme);

    return 0;
}
