#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise une variable de type struct dog
 * @d: pointeur vers la structure à initialiser
 * @name: nom
 * @age: âge
 * @owner: propriétaire du chien
 *
 * Description: Cette fonction initialise les membres
 * d'une structure dog avec les valeurs passées en paramètre.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
