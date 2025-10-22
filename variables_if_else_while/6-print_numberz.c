#include <stdio.h>

/**
 * main - Affiche tous les chiffres à un chiffre en base 10, de 0 à 9
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int n;

	/* Parcourt les codes ASCII des chiffres de '0' à '9' */
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n'); /* Retour à la ligne à la fin */
	return (0);
}
