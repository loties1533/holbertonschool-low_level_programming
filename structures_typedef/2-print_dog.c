#include "dog.h"
#include <stdio.h>

/**
 * print_dog - affiche les info d'une structure dog
 * @d: pointeur vers la structure dog
 *
 * Description: Affiche (nil) si element vaut NULL.
 * Rien si le pointeur d est NULL.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %.6f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}