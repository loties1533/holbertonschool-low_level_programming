#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    va_list lst;
    unsigned int i;
    int somme = 0;

    if (n == 0)
        return 0;

        
    va_start(lst,n);
    for(i = 0; i < n; i ++)
    {
        int valeur = va_arg(lst, int);
        somme += valeur;
    }
    va_end(lst);

    return somme;
}