#include "function_pointers.h"
#include <stdio.h>

/**
 * 0-print_name.c - affiche un nom avec un pointeur sur fonction
 * @name: chaîne de caractères pour le nom
 * @f: pointeur vers une fonction qui prend un char * et retourne void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
