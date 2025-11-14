#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copie une chaîne de caractères dans une nouvelle mémoire
 * @str: la chaîne à copier
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si erreur
 */
char *_strdup(char *str)
{
    char *copy;
    int lon = 0;
    int index;

    if (str == NULL)
        return NULL;

    while (str[lon] != '\0')
        lon++;


    copy = malloc(lon + 1);
    if (copy == NULL)
        return NULL;


    for (index = 0; index <= lon; index++)
        copy[index] = str[index];

    return copy;
}
