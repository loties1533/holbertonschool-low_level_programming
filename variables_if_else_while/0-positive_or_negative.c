#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Description: génère un nombre aléatoire et indique s'il est positif,
 * négatif ou nul
 *
 * Return: 0 pour indiquer que le programme s'est terminé avec succès
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
