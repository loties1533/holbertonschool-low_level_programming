#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @s: chaîne de caractères
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

/**
 * _strcpy - copie une chaîne de caractères
 * @dest: destination
 * @src: source
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
 * new_dog - crée une nouvelle structure dog_t
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Return: pointeur vers la nouvelle structure dog_t, ou NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int long1, long2;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	 long1 = _strlen(name);
	long2 = _strlen(owner);

	d->name = malloc((long1 + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc((long2 + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
 
	 _strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}