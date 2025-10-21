#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Description: affiche l'alphabet en minuscules sauf 'q' et 'e'
 *
 * Return: 0 si le programme s'exécute correctement
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	  if (c != 'e' && c != 'q') /* ignore  la  lettre E et Q dans la boucle */
			putchar(c);
	}
	putchar('\n');

	return (0);
}
