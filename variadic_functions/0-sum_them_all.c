#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    int somme = 0;

    va_start(ap,n);
    for(i = 0; i < n; i ++)
    {
        int valeur = va_arg(ap, int);
        somme += valeur;
    }
    va_end(ap);

    return somme;
}