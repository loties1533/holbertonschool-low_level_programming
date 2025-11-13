#ifndef DOG_H
#define DOG_H

/**
 * struct dog - représente un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 *
 * Description: Structure pour stocker les informations d'un chien.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initialise une structure dog
 * @d: pointeur vers la structure dog
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Description: Initialise les membres de la structure dog
 * avec les valeurs passées en paramètre.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - affiche les informations d'une structure dog
 * @d: pointeur vers la structure dog
 *
 * Description: Affiche (nil) si un élément vaut NULL.
 * Ne fait rien si le pointeur d est NULL.
 */
void print_dog(struct dog *d);

#endif
