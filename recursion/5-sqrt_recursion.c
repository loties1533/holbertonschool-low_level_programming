#include "main.h"

/**
 * _sqrt_recursion - Fonction publique qui retourne la racine carrée naturelle
 *                  d'un nombre
 * @n: Le nombre dont on cherche la racine
 *
 * Return: La racine carrée de n si elle existe, sinon -1
 */
int test_racine(int n, int test)
{
	if (test * test == n)
		return (test);
	if (test * test > n)
		return (-1);
	return (test_racine(n, test + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (test_racine(n, 1));
}


