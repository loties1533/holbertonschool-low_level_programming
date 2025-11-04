#include "main.h"

/**
 * _strstr - localise la première occurrence de la sous-chaîne needle
 *            dans la chaîne haystack
 * @haystack: chaîne principale
 * @needle: sous-chaîne à rechercher
 *
 * Return: pointeur vers le début de la sous-chaîne trouvée,
 *         ou NULL si needle n'est pas trouvée
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (0);
}
