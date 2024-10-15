#include <stdio.h>

void permuter(char *a, char *b) {
    char temp;

    // Permutation en utilisant une variable temporaire
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char x, y;

    // Lecture des caractères
    printf("Entrez le premier caractère : ");
    scanf(" %c", &x);  // Un espace avant %c permet d'ignorer les espaces blancs

    printf("Entrez le second caractère : ");
    scanf(" %c", &y);

    // Affichage avant permutation
    printf("\nAvant permutation : x = %c, y = %c\n", x, y);

    // Appel de la fonction pour permuter
    permuter(&x, &y);

    // Affichage après permutation
    printf("Après permutation : x = %c, y = %c\n", x, y);

    return 0;
}

