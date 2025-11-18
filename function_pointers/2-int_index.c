#include "function_pointers.h"

/**
 * int_index - recherche un entier dans un tableau
 * @array: tableau d'entiers
 * @size: nombre d'éléments
 * @cmp: fonction de comparaison
 *
 * Retour: index du premier élément trouvé, -1 sinon
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, valid;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		valid = cmp(array[i]);
		if (valid != 0)
			return (i);
	}

	return (-1);
}
