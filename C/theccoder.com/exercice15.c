#include <stdio.h>
#include <math.h>

// Définir la structure Point
struct Point {
    float x;
    float y;
};

// Fonction pour calculer la distance entre deux points
float calculerDistance(struct Point p1, struct Point p2) {
    float distance;
    distance = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
    return distance;
}

int main() {
    struct Point point1, point2;  // Déclarer deux points
    float distance;

    // Lire les coordonnées du premier point
    printf("Entrez les coordonnées du premier point (x y) : ");
    scanf("%f %f", &point1.x, &point1.y);

    // Lire les coordonnées du deuxième point
    printf("Entrez les coordonnées du deuxième point (x y) : ");
    scanf("%f %f", &point2.x, &point2.y);

    // Calculer la distance entre les deux points
    distance = calculerDistance(point1, point2);

    // Afficher la distance
    printf("La distance entre les deux points est : %.2f\n", distance);

    return 0;
}
