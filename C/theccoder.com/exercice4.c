#include <stdio.h>

int main() {
    int num;

    // Lire un entier
    printf("Entrez un entier: ");
    scanf("%d", &num);

    // Vérifier si l'entier est pair ou impair
    if (num % 2 == 0) {
        printf("%d est un nombre pair.\n", num);
    } else {
        printf("%d est un nombre impair.\n", num);
    }

    return 0;
}
