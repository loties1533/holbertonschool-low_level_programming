#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - additionne les entiers passés en arguments
 * @n: nombre d'arguments supplémentaires
 * @...: les entiers à additionner
 *
 * Return: la somme des n entiers, ou 0 si n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list	lst;
	unsigned int i;
	int	somme = 0;

	if (n == 0)
		return (0);

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		int valeur = va_arg(lst, int);
		somme = somme + valeur;
	}
	va_end(lst);

	return (somme);
}
