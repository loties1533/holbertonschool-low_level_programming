#include "lists.h"
#include <stdlib.h>

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    dlistint_t *tmp;
 
    tmp = head;

    for (i = 0; tmp != NULL; i++)
    {
        if (i == index)
            return tmp;

        tmp = tmp->next;
    }

    return NULL;
}