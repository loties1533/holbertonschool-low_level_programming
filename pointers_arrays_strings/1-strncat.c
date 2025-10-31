#include "main.h"

/**
 * _strncat - concatène deux chaîne en utilisant au plus n caractère de src
 * @dest: chaîne de destination (où l'on ajoute)
 * @src: chaîne source (ce qu'on ajoute)
 * @n: nombre maximum de caractères à ajouter depuis src
 *
 * Return: pointeur vers dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int long_dest = 0;
	int i = 0;

	while (dest[long_dest] != '\0')
		long_dest++;


	while (i < n && src[i] != '\0')
	{
		dest[long_dest] = src[i];
		long_dest++;
		 i++;
	}

	dest[long_dest] = '\0';

	return (dest);
}
