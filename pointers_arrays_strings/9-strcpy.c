#include "main.h"
#include <stdio.h>

/**
 * print_array - affiche n éléments d'un tableau d'entiers
 * @a: tableau d'entiers
 * @n: nombre d'éléments à afficher
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
	{
		dest[i] = src[i];
		  i++;
	}
   dest [i]= '\0';

   return dest;
}