#include "main.h"

/**
 * factorial - calcule la factorielle d'un nombre
 * @n: nombre à calculer
 *
 * Return: factorielle de n, -1 si n < 0
 */
int factorial(int n)
{
    int result = 1;
    int i;

    if (n < 0)
        return (-1);

    for (i = 1; i <= n; i++)
        result *= i;

    return (result);
}
