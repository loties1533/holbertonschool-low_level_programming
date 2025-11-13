#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - alloue de la mémoire et vérifie le succès
 * @b: nombre d’octets à allouer
 *
 * Retour : pointeur vers la mémoire allouée ou exit(98) si échec
 */

void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);

    return ptr;
}
