#include "main.h"

/**
 * puts2 - affiche un caractère sur deux d'une chaîne
 * @str: chaîne à afficher
 */
void puts2(char *str)
{
int situe = 0;
    
    while (str[situe] != '\0')
    {
    _putchar(str[situe]);
    situe += 2;
    }
}
