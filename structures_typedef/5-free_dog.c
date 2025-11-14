#include "dog.h"
#include <stdlib.h>

/**
 * free_dog libere la memoire donnée pour un chien
 *@d : pointeur vers structure
*/

void free_dog(dog_t *d)
{
        if (d == NULL)
            return;

        if (d->name)
            free(d->name);
        
        if (d->owner)
            free(d->owner);

        free(d);
}
