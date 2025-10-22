#include <stdio.h>

/**
 * main - affiche les chiffres de 0 à 9
 *        séparés par une virgule suivie d'un espace
 *
 * Return: toujours 0 (succès)
 */
int main(void)
{
	int i; /* compteur de 0 à 9 */

	for (i = 0; i <= 9; i++) /* boucle sur chaque chiffre */
	{
		putchar(i + '0'); /* affiche le chiffre  */

		if (i < 9) /* ajoute virgule et espace sauf pour le dernier chiffre */
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n'); /* saut a la  ligne à la fin */

	return (0);
}
