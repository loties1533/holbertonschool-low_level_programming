#include "main.h"

/**
 * _isdigit - vérifie si un caractère est un chiffre (0 à 9)
 * @nb: le caractère à vérifier
 *
 * Return: 1 si nb est un chiffre, 0 sinon
 */
int _isdigit(int nb)
{
	if (nb >= '0' && nb <= '9')
		return (1);
	else
		return (0);
}
