#include "main.h"

/**
 * print_square - affiche un carré avec caractère #
 * @size: taille du carré
 */
void print_square(int size)
{
	int li, co;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (li = 0; li < size; li++)
	{
		for (co = 0; co < size; co++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
