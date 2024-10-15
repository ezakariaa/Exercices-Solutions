#include <stdio.h>
#include <stdlib.h>

// Définition de la structure pour un nœud de la liste chaînée
typedef struct Noeud {
    int valeur;
    struct Noeud* suivant;
} Noeud;

// Fonction pour créer un nouveau nœud
Noeud* creerNoeud(int valeur) {
    Noeud* nouveauNoeud = (Noeud*)malloc(sizeof(Noeud));
    if (nouveauNoeud == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        exit(1);
    }
    nouveauNoeud->valeur = valeur;
    nouveauNoeud->suivant = NULL;
    return nouveauNoeud;
}

// Fonction pour insérer un nœud à la fin de la liste chaînée
Noeud* insererFin(Noeud* tete, int valeur) {
    Noeud* nouveauNoeud = creerNoeud(valeur);

    if (tete == NULL) {
        // Si la liste est vide, le nouveau nœud devient la tête
        return nouveauNoeud;
    } else {
        Noeud* temp = tete;
        while (temp->suivant != NULL) {
            temp = temp->suivant;
        }
        temp->suivant = nouveauNoeud;
        return tete;
    }
}

// Fonction pour afficher les éléments de la liste chaînée
void afficherListe(Noeud* tete) {
    Noeud* temp = tete;
    while (temp != NULL) {
        printf("%d -> ", temp->valeur);
        temp = temp->suivant;
    }
    printf("NULL\n");
}

int main() {
    Noeud* tete = NULL;
    int n, valeur;

    // Lecture du nombre d'éléments à insérer
    printf("Entrez le nombre d'éléments à insérer dans la liste : ");
    scanf("%d", &n);

    // Insertion des éléments dans la liste
    for (int i = 0; i < n; i++) {
        printf("Entrez l'entier %d: ", i + 1);
        scanf("%d", &valeur);
        tete = insererFin(tete, valeur);
    }

    // Affichage de la liste chaînée
    printf("\nLes éléments de la liste chaînée sont :\n");
    afficherListe(tete);

    return 0;
}

