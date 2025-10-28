#include "main.h"

/**
 * print_line - trace une ligne droite dans le terminal
 * @ligne: nombre de fois que le caractère '_' doit être affiché
 *
 * Description: La fonction affiche '_' ligne fois
 * sur la même ligne. Si ligne <= 0, elle affiche juste
 * un retour à la ligne.
 */
void print_line(int ligne)
{
	int i;

	/* Si ligne est 0 ou négatif, affiche seulement un retour à la ligne */
	if (ligne <= 0)
	{
		_putchar('\n');
		return;
	}

	/* Boucle pour afficher '_' ligne fois */
	for (i = 0; i < ligne; i++)
	{
		_putchar('_');
	}

	/* On termine toujours par un retour à la ligne */
	_putchar('\n');
}
