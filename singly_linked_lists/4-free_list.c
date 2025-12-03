#include "lists.h"
#include <stdlib.h>

/**
 * free_list - libère toute une liste chaînée list_t
 * @head: pointeur vers le premier noeud de la liste
 *
 * Return: void 
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
        free(head->str);
		free(head);
        
		head = tmp;
	}
}
