#include "main.h"

/**
 * print_alphabet_x10 - Affiche 10 fois l'alphabet en minuscules
 *                      suivi d'un retour à la ligne
 *
 * Return: Rien (void)
 */
void print_alphabet_x10(void)
{
    int i;
    char letter;

    for (i = 0; i < 10; i++)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }
        _putchar('\n');
    }
}
