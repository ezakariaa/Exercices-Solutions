#include <stdio.h>

int main() {
    int a, b;

    // Lire les deux entiers
    printf("Entrez l'entier a: ");
    scanf("%d", &a);
    
    printf("Entrez l'entier b: ");
    scanf("%d", &b);

    // Comparer a et b
    if (a == b) {
        printf("a = b\n");
    } else if (a > b) {
        printf("a > b\n");
    } else {
        printf("a < b\n");
    }

    return 0;
}

