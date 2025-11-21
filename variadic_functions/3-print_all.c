#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

static void affiche_char(va_list args)
{
    printf ("%c" , va_arg(args, int));
}

static void affiche_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

static void affiche_float(va_list args)
{
    printf("%f", va_arg(args , double));
}

static void affiche_string(va_list args)
{
    char *s = va_arg(args, char *);

    if (s == NULL)
        s = ("(nil)");
    
    printf("%s", s);
}

typedef struct affiche_type
{

    char type_char;
    void (*fonction)(va_list);
}affiche_t;

void print_all(const char * const format, ...)
{
    va_list args;

    affiche_t tableau_affichage[] = {
        {'c', affiche_char},
        {'i', affiche_int},
        {'f', affiche_float},
        {'s', affiche_string},
    };

    unsigned int ind_pos = 0;
    unsigned int ind_type;
    char *virgule = "";

    va_start(args , format);

    while (format && format [ind_pos])
    {
        ind_type = 0;

        while (ind_type < 4)
        {
            if (format[ind_pos] == tableau_affichage[ind_type].type_char)
            {
                printf("%s" , virgule);
                tableau_affichage[ind_type].fonction(args);
                virgule = ", ";
                break;
            }
            ind_type++;
        }
        ind_pos++;
    }
    va_end(args);
    printf("\n");

}