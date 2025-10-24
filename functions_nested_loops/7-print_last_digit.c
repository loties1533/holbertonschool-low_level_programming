#include "main.h"

/**
 * print_last_digit - Affiche le dernier chiffre d’un nombre
 * @n: Le nombre dont on veut le dernier chiffre
 *
 * Return: Le dernier chiffre du nombre
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = -last;

	_putchar('0' + last); /* Affiche le dernier chiffre */
	return (last);
}
