#include "main.h"

/**
 * print_alphabet - l'alphabet en minuscules suivi d'un retour à la ligne
 *
 * Return: Rien (void)
 */
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
	_putchar('\n');
}
