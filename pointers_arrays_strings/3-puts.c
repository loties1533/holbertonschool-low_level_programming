#include "main.h"

/**
 * _puts - affiche une chaîne suivie d'un saut de ligne
 * @str: chaîne à afficher
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
