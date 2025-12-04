#include "lists.h"
#include <stdlib.h>

int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *tmp;

    tmp = head;
    while (tmp != NULL)
    {
        sum += tmp->n;
        tmp = tmp->next;
    }

    return sum;
}