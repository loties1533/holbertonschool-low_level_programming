#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nvx_node, *tmp;
	unsigned int len = 0;

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

	while (str[len])
		len++;

	nvx_node->len = len;
	nvx_node->next = NULL;

	if (*head == NULL)
	{
		*head = nvx_node;
		return (nvx_node);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = nvx_node;

	return (nvx_node);
}
