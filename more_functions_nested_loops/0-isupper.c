#include "main.h"

/**
 * _isupper - vérifie si un caractère est en majuscule
 * @car: le caractère à vérifier
 *
 * Return: 1 si car est une majuscule, 0 sinon
 */
int _isupper(int car)
{
    if (car >= 'A' && car <= 'Z')
        return (1);
    else
        return (0);
}
