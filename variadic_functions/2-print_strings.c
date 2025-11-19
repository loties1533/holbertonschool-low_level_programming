#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Affiche des chaînes de caractères séparées par separator
 * @separator: ','
 * @n: Nombre de chaînes passées en arguments
 *
 * affiche les chaînes passées en arguments. Si une
 * chaîne est NULL, elle affiche "(nil)". Si separator est NULL,
 * aucun séparateur affiché
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *chaine; 

    va_start (args, n); 
    for ( i = 0; i < n; i++)
    {
        chaine = va_arg(args, char *);
        if (chaine == NULL)
            printf("(nil)");
        else
            printf("%s", chaine);

        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }
    va_end(args);
    printf("\n");
}
