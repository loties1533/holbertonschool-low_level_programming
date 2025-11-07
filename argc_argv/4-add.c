#include <stdio.h>
#include <stdlib.h>

/**
 * verifie_chiffres - vérifie si une chaîne contient uniquement des chiffres
 * @chaine: chaîne à tester
 *
 * Return: 0 si tous les caractères sont des chiffres, 1 sinon
 */

int verifie_chiffres(char *chaine)
{
	int indice = 0;
	char caractere;

	while (chaine[indice] != '\0')
	{
		caractere = chaine[indice];
		if (caractere < '0' || caractere > '9')
			return (1);
		indice++;
	}
	return (0);
}
/**
 * main - additionne les nombres positifs passés en arguments
 * @argc: nombre d'arguments
 * @argv: tableau de chaînes représentant les arguments
 *
 * Return: 0 si succès, 1 si un argument est invalide
 */

int main(int argc, char *argv[])
{
	int total;
	int indice_arg;
	int nombre;
	char *arg_courant;

	total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (indice_arg = 1; indice_arg < argc; indice_arg++)
	{
		arg_courant = argv[indice_arg];
		if (verifie_chiffres(arg_courant))
		{
			printf("Error\n");
			return (1);
		}
		nombre = atoi(arg_courant);
		total += nombre;
	}

	printf("%d\n", total);
	return (0);
}
