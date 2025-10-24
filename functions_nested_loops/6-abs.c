#include <stdio.h>
#include <stdlib.h>

/**
 * main - une fonction qui calcule la valeur absolue d'un entier.

 *        
 *
 * Return: toujours 0 (succès)
 */
int _abs ( int n)
{
        if (n < 0)
          return (-n);
        return (n);
}