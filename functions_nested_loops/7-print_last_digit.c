#include "main.h"

/**
 * print_last_digit - affiche le dernier chiffre d’un nombre
 * @n: le nombre
 * Return: le dernier chiffre
 */
int print_last_digit(int n)
{
    int last;

    last = n % 10;
    if (last < 0)
        last = -last;
    _putchar('0' + last); /* affiche le dernier chiffre */
    return (last);
}
