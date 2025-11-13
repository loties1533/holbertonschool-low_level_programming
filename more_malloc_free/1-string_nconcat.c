#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatène deux chaînes avec au plus n caractères de s2
 * @s1: première chaîne
 * @s2: deuxième chaîne
 * @n: nombre maximum de caractères à copier depuis s2
 *
 * Return: pointeur vers la nouvelle chaîne concaténée,
 *         ou NULL si l'allocation échoue
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *nvl_str;


	while (s1[len1] != '\0')
		len1++;

	while  (s2[len2] != '\0')
		len2++;


	if (n >= len2)
		n = len2;

	nvl_str = malloc(sizeof(char) * (len1 + n + 1));
	if (nvl_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		nvl_str[i] = s1[i];

	for (j = 0; j < n; j++)
		nvl_str[i + j] = s2[j];


	nvl_str[i + j] = '\0';

	return (nvl_str);
}
