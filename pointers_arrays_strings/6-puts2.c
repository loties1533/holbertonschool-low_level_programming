#include "main.h"

/**
 * puts2 - affiche un caractère sur deux d'une chaîne
 * @str: chaîne à afficher
 */
void puts2(char *str)
{
int pos = 0;
    
    while (str[pos] != '\0')
    {
    _putchar(str[pos]);
    pos += 2;
    }
    _putchar('\n');
}
