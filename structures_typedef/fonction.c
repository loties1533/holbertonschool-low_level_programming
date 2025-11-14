#include "main.h"

/**
 * _strcpy - copie la chaîne pointée par src dans dest
 * @dest: buffer de destination
 * @src: chaîne source à copier
 *
 * Return: pointeur vers dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - retourne la longueur d'une chaîne
 * @s: chaine de caractères
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}