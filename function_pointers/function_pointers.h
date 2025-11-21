#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * function_pointers.h - Fichier d'en-tête pour les pointeurs de fonctions
 *
 *  contient les prototypes des fonctions 
 */

/* Recherche un entier dans un tableau */
int int_index(int *array, int size, int (*cmp)(int));

/* Applique une fonction à chaque élément d'un tableau */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Affiche un nom en utilisant une fonction passée en paramètre */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
