#include <stdio.h>

int main() {
    int magicNumber = 42;  // Le nombre magique prédéfini
    int guess;

    // Boucle jusqu'à ce que l'utilisateur trouve le nombre magique
    do {
        // Lire la tentative de l'utilisateur
        printf("Devinez le nombre magique: ");
        scanf("%d", &guess);

        // Comparer avec le nombre magique et donner un indice
        if (guess > magicNumber) {
            printf("C'est au-dessus!\n");
        } else if (guess < magicNumber) {
            printf("C'est en-dessous!\n");
        } else {
            printf("Félicitations ! Vous avez trouvé le nombre magique.\n");
        }
    } while (guess != magicNumber);

    return 0;
}
