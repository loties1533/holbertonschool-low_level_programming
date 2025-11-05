#include "main.h"

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: nombre à tester
 *
 * Return: 1 si premier, sinon 0
 */
int test_diviseur(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div * div > n)
		return (1);
	return (test_diviseur(n, div + 1));
}
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_diviseur(n, 2));
}
