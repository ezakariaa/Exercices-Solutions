#include <stdio.h>

int main() {
    int n, i, j, key;

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

    // Tri par insertion
    for (i = 1; i < n; i++) {
        key = arr[i];  // L'élément à insérer
        j = i - 1;

        // Déplacer les éléments du tableau qui sont plus grands que key
        // pour faire de la place à key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Décaler les éléments vers la droite
            j--;
        }
        arr[j + 1] = key;  // Insérer key à sa position correcte
    }

    // Afficher le tableau trié
    printf("Tableau trié en ordre croissant: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
