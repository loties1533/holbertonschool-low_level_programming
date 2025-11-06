#include <stdio.h>

/**
 * main - affiche le nombre d'arguments passés au programme
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
