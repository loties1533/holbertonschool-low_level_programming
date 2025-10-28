#include "main.h"

/**
 * main - Affiche tous les chiffres de 0 à 9
 *
 * Return: Toujours 0 (Succès)
 *
 */
 void print_numbers(void)
{
    int nb;
    for (nb = 48; nb < 58; nb++)
    {
        _putchar(nb);
    }
    _putchar('\n');
}
