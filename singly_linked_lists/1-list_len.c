#include "lists.h"
#include <stdio.h>

/**
 * list_len - retourne nombre d element d une liste chainée
 * @h: pointeur vers le premier noeud de la liste
 *
 * Return: nombre de noeud
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
        h = h->next;
	}

	return (count);
}
