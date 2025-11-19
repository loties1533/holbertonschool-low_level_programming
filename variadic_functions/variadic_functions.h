#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * variadic_functions.h - Contient le prototype des fonctions variadiques
 *
 *
 */

#include <stdarg.h>

/* Affiche les nombres passés en arguments, séparés par separator */
void print_numbers(const char *separator, const unsigned int n, ...);

/* fonction qui calcule la somme de tous ses arguments */
int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */

