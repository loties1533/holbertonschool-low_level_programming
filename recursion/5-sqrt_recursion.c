#include "main.h"

/**
 * test_racine - vérifie récursivement la racine carrée d'un nombre
 * @n: nombre dont on cherche la racine
 * @test: valeur courante à tester
 *
 * Return: test si test*test == n, sinon -1 si aucune racine entière
 */
int test_racine(int n, int test)
{
	if (test * test == n)
		return (test);
	if (test * test > n)
		return (-1);
	return (test_racine(n, test + 1));
}

/**
 * _sqrt_recursion - retourne la racine carrée naturelle d'un nombre
 * @n: nombre dont on cherche la racine
 *
 * Return: racine carrée de n si elle existe, sinon -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (test_racine(n, 1));
}
