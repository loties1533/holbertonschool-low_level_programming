#include "main.h"

/**
 * print_numbers - affiche les chiffres de 0 à 9
 *
 * Return: rien
 */
void print_numbers(void)
{
	int nb;

	for (nb = 0; nb <= 9; nb++)
	{
		_putchar(nb + '0');
	}
	_putchar('\n');
}
