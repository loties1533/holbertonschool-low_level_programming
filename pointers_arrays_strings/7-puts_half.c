#include "main.h"

/**
 * puts_half - affiche la seconde moitié d'une chaîne de caractères
 * @str: chaîne à afficher
 *
 * Return: void
 */
void puts_half(char *str)
{
	int longueur = 0;
	int debut;

	while (str[longueur] != '\0')
		longueur++;

	if (longueur % 2 == 0)
		debut = longueur / 2;
	else
		debut = (longueur + 1) / 2;

	while (debut < longueur)
	{
		_putchar(str[debut]);
		debut++;
	}

	_putchar('\n');
}
