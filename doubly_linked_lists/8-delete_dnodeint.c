#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - supprime le noeud a un index donné
 * @head: pointeur vers le pointeur tête
 * @index: index du noeud à supp
 *
 * Return: 1 si valide , -1 si échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *supp;
	dlistint_t *precedent;
	unsigned int pos = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		supp = *head;
		*head = supp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(supp);
		return (1);
	}

	precedent = *head;

	while (precedent != NULL)
	{
		if (pos == index - 1)
			break;
		precedent = precedent->next;
		pos++;
	}

	if (precedent == NULL || precedent->next == NULL)
		return (-1);

	supp = precedent->next;
	precedent->next = supp->next;
	if (supp->next != NULL)
		supp->next->prev = precedent;
	free(supp);

	return (1);
}
