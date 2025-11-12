#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copie une chaîne de caractères dans une nouvelle mémoire
 * @source: la chaîne à copier
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si erreur
 */
char *_strdup(char *source)
{
    char *copy;
    int long = 0;
    int index;

    if (source == NULL)
        return NULL;

    while (source[long] != '\0')
        long++;


    copy = malloc(long + 1);
    if (copy == NULL)
        return NULL;


    for (index = 0; index <= long; index++)
        copy[index] = source[index];

    return copy;
}
