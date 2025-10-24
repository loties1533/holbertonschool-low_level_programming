#include "main.h"

/**
 * _abs - retourne la valeur absolue d'un entier
 * @n: entier à tester
 *
 * Return: valeur absolue de n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
