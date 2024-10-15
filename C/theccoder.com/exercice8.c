#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Lire un entier
    printf("Entrez un entier: ");
    scanf("%d", &num);

    // Gérer les cas spéciaux
    if (num <= 1) {
        printf("%d n'est pas un nombre premier.\n", num);
        return 0;
    }

    // Vérifier si le nombre est premier
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Num a un diviseur autre que 1 et lui-même
            break;
        }
    }

    // Afficher le résultat
    if (isPrime == 1) {
        printf("%d est un nombre premier.\n", num);
    } else {
        printf("%d n'est pas un nombre premier.\n", num);
    }

    return 0;
}

