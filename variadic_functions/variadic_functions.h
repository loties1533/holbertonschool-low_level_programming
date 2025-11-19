#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * variadic_functions.h - Contient le prototype des fonctions variadiques
 *
 * Ce fichier d'en-tête déclare la fonction sum_them_all qui permet
 * de calculer la somme d'un nombre variable d'entiers.
 */

#include <stdarg.h>

/* Prototype d'une fonction qui calcule la somme de tous ses arguments */
int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */

