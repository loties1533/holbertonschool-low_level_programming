#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * affiche l'alphabet en minuscules puis  majuscules,
 *              suivi d'un retour à la ligne.
 *
 * Return: 0 si le programme s'exécute correctement
 */
int main(void)
{
	char c;

	/*  l'alphabet en minuscules */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	/* l'alphabet en majuscules */
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
