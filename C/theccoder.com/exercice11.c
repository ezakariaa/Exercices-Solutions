#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Lire le nombre d'éléments dans le tableau
    printf("Entrez le nombre d'éléments dans le tableau: ");
    scanf("%d", &n);

    // Déclarer un tableau pour stocker les éléments
    int arr[n];

    // Lire les éléments du tableau
    printf("Entrez %d éléments:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tri à bulles
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Échanger les éléments adjacents s'ils ne sont pas dans l'ordre
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Afficher le tableau trié
    printf("Tableau trié en ordre croissant: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

