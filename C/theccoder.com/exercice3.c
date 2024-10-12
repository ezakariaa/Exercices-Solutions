#include <stdio.h>

int main() {
    float num1, num2, product;

    // Lire deux nombres réels
    printf("Entrez le premier nombre: ");
    scanf("%f", &num1);
    
    printf("Entrez le deuxième nombre: ");
    scanf("%f", &num2);

    // Calculer le produit des deux nombres
    product = num1 * num2;

    // Afficher le produit avec une précision de trois chiffres après la virgule
    printf("Le produit est: %.3f\n", product);

    return 0;
}

