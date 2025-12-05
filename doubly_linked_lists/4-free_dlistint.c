#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - libère une liste doublement chaînée
 * @head: pointeur vers le premier élément de la liste
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
