#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatène deux chaînes
 * @s1: première chaîne
 * @s2: deuxième chaîne
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si échec
 */
char *str_concat(char *s1, char *s2)
{
    char *result;
    int i, j;
    int longueur1 = 0, longueur2 = 0;


    if (s1)
    {
        while (s1[longueur1] != '\0')
            longueur1++;
    }


    if (s2)
    {
        while (s2[longueur2] != '\0')
            longueur2++;
    }

   
    result = malloc(sizeof(char) * (longueur1 + longueur2 + 1));
    if (result == NULL)
    return (NULL);


    for (i = 0; i < longueur1; i++)
        result[i] = s1[i];

    for (j = 0; j < longueur2; j++)
        result[i + j] = s2[j];


    result[i + j] = '\0';

    return result;
}
