#include <stdio.h>
#include <string.h>

#define MAX_ETUDIANTS 100
#define MAX_CHAR 50

// Définition de la structure Etudiant
typedef struct {
    char nom[MAX_CHAR];
    char prenom[MAX_CHAR];
    float note;
} Etudiant;

int main() {
    int n, i;

    // Demande à l'utilisateur combien d'étudiants il souhaite entrer
    printf("Entrez le nombre d'étudiants : ");
    scanf("%d", &n);

    // Déclaration d'un tableau d'étudiants
    Etudiant etudiants[MAX_ETUDIANTS];

    // Boucle pour lire les informations des étudiants
    for (i = 0; i < n; i++) {
        printf("\nEtudiant %d:\n", i + 1);

        printf("Nom: ");
        scanf("%s", etudiants[i].nom);

        printf("Prenom: ");
        scanf("%s", etudiants[i].prenom);

        printf("Note (sur 20): ");
        scanf("%f", &etudiants[i].note);
    }

    // Affichage des étudiants ayant une note >= 10
    printf("\nListe des étudiants ayant une note >= 10:\n");
    for (i = 0; i < n; i++) {
        if (etudiants[i].note >= 10) {
            printf("%s %s avec une note de %.2f\n", etudiants[i].prenom, etudiants[i].nom, etudiants[i].note);
        }
    }

    return 0;
}

