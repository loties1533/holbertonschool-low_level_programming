#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - affiche un nom avec un un pointeur sur fonction
 * @name: chaîne de caracteres pour le nom
 * @f: pointeur vers une fonction qui prend un char * et retourne void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL )
        return;
    
    f(name);
}