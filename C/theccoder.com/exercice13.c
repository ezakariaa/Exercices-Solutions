#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Tableau pour stocker la chaîne de caractères
    int i, length, isPalindrome = 1;

    // Lire la chaîne de caractères
    printf("Entrez une chaîne de caractères: ");
    scanf("%s", str);

    // Calculer la longueur de la chaîne
    length = strlen(str);

    // Vérifier si la chaîne est un palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;  // Si des caractères ne correspondent pas, ce n'est pas un palindrome
            break;
        }
    }

    // Afficher le résultat
    if (isPalindrome) {
        printf("La chaîne est un palindrome.\n");
    } else {
        printf("La chaîne n'est pas un palindrome.\n");
    }

    return 0;
}
