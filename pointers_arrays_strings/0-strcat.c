#include "main.h"

/**
 * _strcat - concatène la chaîne source à la chaîne de destination
 * @dest: chaîne de destination
 * @src: chaîne source
 *
 * Return: pointeur vers la chaîne de destination
 */
char *_strcat(char *dest, char *src)
{
	int s = 0;
	int d = 0;

	while (dest[s] != '\0')
		s++;

	while (src[d] != '\0')
	{
		dest[s] = src[d];
		s++;
		d++;
	}

	dest[s] = '\0';

	return (dest);
}
