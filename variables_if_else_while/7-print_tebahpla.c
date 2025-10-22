#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules à l'envers
 *
 * Return: 0 si le programme s'exécute correctement
 */
int main(void)
{
	int lettre;  /* lettre = ma variable */

	for (lettre = 'z'; lettre >= 'a'; lettre--)
	{
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
