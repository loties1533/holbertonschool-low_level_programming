#include <stdio.h>

/**
 * main - Affiche tous les chiffres de base 10 à partir de 0
 *
 * Description: Le programme affiche les chiffres de 0 à 9
 * suivis d’un retour à la ligne.
 *
 * Return: 0 si le programme s'exécute correctement
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
