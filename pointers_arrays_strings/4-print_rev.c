#include "main.h"

/**
 * print_rev - affiche une chaîne en reverse suivie d'un saut de ligne
 * @s: chaîne à afficher
 */
void print_rev(char *s)
{
	char *pointeur = s;

	while (*pointeur != '\0')
		pointeur++;
	pointeur--;

	while (pointeur >= s)
	{
		_putchar(*pointeur);
		pointeur--;
	}

	_putchar('\n');
}
