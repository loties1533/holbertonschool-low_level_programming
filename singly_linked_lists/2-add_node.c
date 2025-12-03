#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - ajoute un nouveau noeud au début de la liste chaînée
 * @head: double pointeur vers le premier noeud de la liste
 * @str: chaine a dupliquer et inserer dans le nouveau noeud
 *
 * Return: adresse du nouveau noeud ou NULL si échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nvx_node;

	if (str == NULL)
		return (NULL);

	nvx_node = malloc(sizeof(list_t));
	if (nvx_node == NULL)
		return (NULL);

	nvx_node->str = strdup(str);
	if (nvx_node->str == NULL)
	{
		free(nvx_node);
		return (NULL);
	}

	nvx_node->len = 0;
	while (str[nvx_node->len])
		nvx_node->len++;


	nvx_node->next = *head;
	*head = nvx_node;

	return (nvx_node);
}
