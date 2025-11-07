#include "main.h"

/**
 * _strpbrk - cherche le premier caractère commun entre deux chaînes
 * @s: chaîne dans laquelle on cherche
 * @accept: chaîne contenant les caractères à trouver
 *
 * Return: pointeur vers le premier caractère de s trouvé dans accept,
 * ou NULL si aucun caractère n’est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
	int pos_s;
	int pos_accept;

	for (pos_s = 0; s[pos_s] != '\0'; pos_s++)
	{
		for (pos_accept = 0; accept[pos_accept] != '\0'; pos_accept++)
		{
			if (s[pos_s] == accept[pos_accept])
			{
				return (&s[pos_s]);
			}
		}
	}

	return (0);
}
