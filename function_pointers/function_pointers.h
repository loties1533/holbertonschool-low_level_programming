#include <stddef.h>

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * function_pointers.h - Fichier d'en-tête pour les pointeurs de fonctions
 *
 * Ce fichier contient les prototypes des fonctions 
 */
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));


#endif
