#include "main.h"
#include <stdlib.h>

/**
 * array_range - crée un tableau d'entiers de min à max inclus
 * @min: valeur minimale
 * @max: valeur maximale
 * Return: pointeur vers le tableau ou NULL si échec ou min>max
 */
int *array_range(int min, int max)
{
	int *tab;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	tab = malloc(size * sizeof(int));
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tab[i] = min + i;

	return (tab);
}
