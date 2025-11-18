#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - exécute une fonction sur chaque élément d'un tableau
 * @array: tableau d'entiers
 * @size: taille du tableau
 * @action: fonction applique à chaque élément tableau
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array == NULL || action == NULL)
        return;

    for (i = 0; i < size; i++)
        action(array[i]);
}
