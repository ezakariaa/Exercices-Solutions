#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Lire les trois entiers
    printf("Entrez le premier entier: ");
    scanf("%d", &a);
    
    printf("Entrez le deuxième entier: ");
    scanf("%d", &b);
    
    printf("Entrez le troisième entier: ");
    scanf("%d", &c);

    // Comparaison et échange pour trier les entiers
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Afficher les entiers dans l'ordre croissant
    printf("Les entiers dans l'ordre croissant: %d %d %d\n", a, b, c);

    return 0;
}

