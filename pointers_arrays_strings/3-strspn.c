#include "main.h"

/**
 * _strspn-calcule la longueur du segment initial de s
 *            ne contenant que des caractères de accept
 * @s: la chaîne à parcourir
 * @accept: les caractères à accepter
 *
 * Return: le nombre de caractères initiaux présents dans accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int compteur = 0;

	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				break;
			a++;
		}

		if (*a == '\0')
			break;

		compteur++;
		s++;
	}

	return (compteur);
}
