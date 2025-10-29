/**
 * _strlen - retourne la longueur d'une chaîne
 * @s: chaine de caractères
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (*s != '\0')
	{
	longueur++;
	s++;
	}
return (longueur);
}
