#include <stdio.h>

int main() {
    int n, i, j, numToDelete;

    // Lire le nombre d'éléments
    printf("Entrez le nombre d'éléments à lire (n): ");
    scanf("%d", &n);

    // Déclarer un tableau pour stocker les n éléments
    int arr[n];

    // Lire les n éléments
    printf("Entrez %d éléments:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Lire le nombre à supprimer
    printf("Entrez le nombre à supprimer: ");
    scanf("%d", &numToDelete);

    // Afficher le tableau avant suppression
    printf("Tableau avant suppression: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Suppression de toutes les occurrences de numToDelete
    int newSize = n;
    for (i = 0; i < newSize; i++) {
        if (arr[i] == numToDelete) {
            // Décaler les éléments vers la gauche
            for (j = i; j < newSize - 1; j++) {
                arr[j] = arr[j + 1];
            }
            newSize--; // Réduire la taille du tableau
            i--; // Re-vérifier la position i après décalage
        }
    }

    // Afficher le tableau après suppression
    printf("Tableau après suppression: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

