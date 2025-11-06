#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres passés en arguments
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0 si succès, 1 si nombre d'arguments incorrect
 */
int main(int argc, char *argv[])
{
	int a, b, resultat;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	resultat = a * b;

	printf("%d\n", resultat);

	return (0);
}
