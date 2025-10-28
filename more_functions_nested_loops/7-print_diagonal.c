#include "main.h"

/**
 * print_diagonal - trace une diagonale avec le caractère '\'
 * @n: nombre de lignes à afficher
 */
void print_diagonal(int n)
{
    int ligne, espace;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (ligne = 0; ligne < n; ligne++)
    {
        for (espace = 0; espace < ligne; espace++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}