#include "main.h"

/**
 * _strchr - trouve un caractère dans une chaîne
 * @s: chaîne source
 * @c: caractère à trouver
 *
 * Return: pointeur vers la 1ère occurrence de c, ou 0 si pas trouvé
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (0);
}
