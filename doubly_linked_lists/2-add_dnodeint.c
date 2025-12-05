#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - ajoute un nœud au début d'une liste doublement chaînée
 * @head: pointeur vers le pointeur du premier élément de la liste
 * @n: valeur à ajouter dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, NULL si échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nvx;

	nvx = malloc(sizeof(dlistint_t));
	if (nvx == NULL)
		return (NULL);

	nvx->n = n;
	nvx->prev = NULL;
	nvx->next = *head;

	if (*head != NULL)
		(*head)->prev = nvx;

	*head = nvx;

	return (nvx);
}
