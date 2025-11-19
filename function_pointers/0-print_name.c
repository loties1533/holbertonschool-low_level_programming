#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Affiche un nom en utilisant une fonction donnée
 * @name: Le nom à afficher
 * @f: Pointeur vers la fonction utilisée pour afficher le nom
 *
 * Retour: Rien
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

