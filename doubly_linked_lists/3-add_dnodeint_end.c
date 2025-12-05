#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - ajoute un nœud en fin de liste doublement chaînée
 * @head: pointeur vers le pointeur du premier élément de la liste
 * @n: valeur à ajouter dans le nouveau noeud
 *
 * Return: adresse du nouveau nœud, NULL si échec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nvx;
	dlistint_t *tmp;

	nvx = malloc(sizeof(dlistint_t));
	if (nvx == NULL)
		return (NULL);

	nvx->n = n;
	nvx->next = NULL;

	if (*head == NULL)
	{
		nvx->prev = NULL;
		*head = nvx;
		return (nvx);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = nvx;
	nvx->prev = tmp;

	return (nvx);
}
