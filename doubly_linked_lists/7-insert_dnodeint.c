#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *nvx;
    dlistint_t *precedent;
    unsigned int pos = 0;

    if (h == NULL)
        return(NULL);

    if (idx == 0)
        return (add_dnodeint(h, n));

    precedent = *h;
    while (precedent != NULL)
    {
       if (pos == idx - 1)
        {
            if (precedent->next == NULL)
                return (add_dnodeint_end(h, n));


            nvx = malloc(sizeof(dlistint_t));
            if (nvx == NULL)
                return (NULL);

            nvx->n = n;
            nvx->next = precedent->next;
            nvx->prev = precedent;
            

            precedent->next->prev = nvx;
            precedent->next = nvx;

            return (nvx);
        }

        precedent = precedent->next;
        pos++;
    }


    return (NULL);
}
