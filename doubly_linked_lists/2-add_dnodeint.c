#include "lists.h"
#include <stdlib.h>

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
