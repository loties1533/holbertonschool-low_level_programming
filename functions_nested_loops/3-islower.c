#include "main.h"

/**
 * _islower - Vérifie si un caractère est une minuscule
 * @c: caractère à vérifier (code ASCII)
 *
 * Return: 1 si c est en minuscule, 0 sinon
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
