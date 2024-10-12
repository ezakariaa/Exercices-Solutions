#include <stdio.h>

int main() {
    int num, reversedNum;
    int hundreds, tens, ones;

    // Lire un nombre entier à 3 chiffres
    printf("Entrez un entier à trois chiffres: ");
    scanf("%d", &num);

    // Extraire les centaines, dizaines et unités
    hundreds = num / 100;        // Premier chiffre (centaines)
    tens = (num / 10) % 10;      // Deuxième chiffre (dizaines)
    ones = num % 10;             // Troisième chiffre (unités)

    // Réassembler les chiffres dans l'ordre inverse
    reversedNum = (ones * 100) + (tens * 10) + hundreds;

    // Afficher le nombre inversé
    printf("Le nombre inversé est: %d\n", reversedNum);

    return 0;
}

