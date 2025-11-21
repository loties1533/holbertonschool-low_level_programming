#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


/**
 * variadic_functions.h - Contient le prototype des fonctions variadiques
 *
 *
 */

#include <stdarg.h>

/**
 * print_all - affiche les arguments selon leur type
 * @format: chaîne représentant les types d'arguments (c,i,f,s)
 */
void print_all(const char * const format, ...);

/**
 * print_strings - affiche plusieurs chaînes
 * @separator: " , " afficher entre chaque argument
 * @n: nombre d'arguments
 * ...: arguments variadiquestype char *
 * Si une string  NULL, affiche (nil)
 */
void print_strings(const char *separator, const unsigned int n, ...);

/* Affiche les nombres passés en arguments, séparés par separator */
void print_numbers(const char *separator, const unsigned int n, ...);

/* fonction qui calcule la somme de tous ses arguments */
int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */

