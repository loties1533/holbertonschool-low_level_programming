#include "main.h"


/**
 * _atoi - convertit une chaîne en entier
 * @s: chaîne à convertir
 *
 * Return: entier correspondant à la chaîne
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, res = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
		}
		i++;
	}

	return (res * sign);
}
