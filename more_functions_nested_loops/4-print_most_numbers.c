#include "main.h"

/**
 * print_most_numbers - affiche les chiffres de 0 à 9
 *                       sauf 2 et 4, suivis d'un saut de ligne
 *
 * Return: rien
 */
void print_most_numbers(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		if (nb != '2' && nb != '4')
			_putchar(nb);
	}
	_putchar('\n');
}
