#include "main.h"

/**
 * test_diviseur - vérifie récursivement si un nombre a un diviseur
 * @n: nombre à tester
 * @div: diviseur courant à tester
 *
 * Return: 0 si n n'est pas premier, 1 si n est premier
 */
int test_diviseur(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div * div > n)
		return (1);
	return (test_diviseur(n, div + 1));
}

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: nombre à tester
 *
 * Return: 1 si premier, sinon 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_diviseur(n, 2));
}
