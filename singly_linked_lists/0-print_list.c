#include "lists.h"
#include <stdio.h>

/**
 * print_list - affiche tout les element d une liste chainée
 * @h: pointeur vers le premier noeud d ela liste
 *
 * Return: nombre de noeud
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
