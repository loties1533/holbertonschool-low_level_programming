#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: chaîne à inverser
 */
void rev_string(char *s)
{
	int longueur = 0;
	int debut, fin;
	char temp;

	while (s[longueur] != '\0')
		longueur++;

	debut = 0;
	fin = longueur - 1;

	while (debut < fin)
	{
		temp = s[debut];
		s[debut] = s[fin];
		s[fin] = temp;
		debut++;
		fin--;
	}
}
