#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - imprime les éléments d'une liste doublement chaînée
 * @h: pointeur vers le premier élément de la liste
 *
 * Return: nombre de noeud
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
