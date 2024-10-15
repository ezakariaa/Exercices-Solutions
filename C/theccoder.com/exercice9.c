#include <stdio.h>

int main() {
    int n, i, sum = 0, max, min;

    // Lire le nombre d'éléments à entrer
    printf("Entrez le nombre d'entiers à lire (n): ");
    scanf("%d", &n);

    // Déclarer un tableau pour stocker les entiers
    int arr[n];

    // Lire les n entiers
    printf("Entrez %d entiers positifs:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialiser min et max avec le premier élément du tableau
    max = arr[0];
    min = arr[0];

    // Calculer la somme, le maximum et le minimum
    for (i = 0; i < n; i++) {
        sum += arr[i];  // Calcul de la somme

        // Vérification pour le maximum
        if (arr[i] > max) {
            max = arr[i];
        }

        // Vérification pour le minimum
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Afficher le tableau
    printf("Les éléments du tableau sont: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Afficher la somme, le maximum et le minimum
    printf("Somme des éléments: %d\n", sum);
    printf("Maximum des éléments: %d\n", max);
    printf("Minimum des éléments: %d\n", min);

    return 0;
}

