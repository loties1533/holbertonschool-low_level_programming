#include "main.h"

/**
 * string_toupper - convertit toutes les lettres minuscules d'une chaîne
 *                  en majuscules
 * @str: chaîne à modifier
 *
 * Return: pointeur vers la chaîne modifiée
 */
char *string_toupper(char *str)
{
int i = 0;
	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = 'A' + (str[i] - 'a');
	i++;

	}

	return (str);
}
