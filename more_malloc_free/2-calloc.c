#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alloue de la mémoire pour un tableau et initialise à zéro
 * @nmemb: nombre d'éléments
 * @size: taille de chaque élément en octets
 * Return: pointeur vers la mémoire allouée ou NULL si échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	p = ptr;
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (ptr);
}
