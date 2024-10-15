#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100], str2[100];
	
	// Lire les deux chaînes de caractères
	printf("Entrez la première chaîne: ");
	scanf("%s", str1);
	printf("Entrez la deuxième chaîne: ");
	scanf("%s", str2);

	// Comparer les chaînes avec strcmp
	if (strcmp(str1, str2) < 0)
	{
		printf("Ordre alphabétique: %s, %s\n", str1, str2);
	}
	else
	{
		printf("Ordre alphabétique: %s, %s\n", str2, str1);
	}
	
	return 0;
}
