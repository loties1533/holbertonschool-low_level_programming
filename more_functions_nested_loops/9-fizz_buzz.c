#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Description: Affiche les nombres de 1 à 100,
 * sauf les multiples de 3, 5 et 15 remplacés par
 * "Fizz", "Buzz" ou "FizzBuzz".
 *
 * Return: Always 0
 */
int main(void)
{
	int nb = 1;

	while (nb <= 100)
	{
		if (nb % 15 == 0)
			printf("FizzBuzz");
		else if (nb % 3 == 0)
			printf("Fizz");
		else if (nb % 5 == 0)
			printf("Buzz");
		else
			printf("%d", nb);

		if (nb != 100)
			printf(" ");

		nb++;
	}

	printf("\n");
	return (0);
}
