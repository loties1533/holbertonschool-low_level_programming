#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Description: affiche la taille des principaux types de données
 *
 * Return: 0 pour indiquer que le programme s'est terminé avec succès
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",
	       (unsigned long)sizeof(long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
