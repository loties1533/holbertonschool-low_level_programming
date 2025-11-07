#include <stdio.h>

/**
 * print_diagsums - affiche la somme des deux diagonales d'une matrice carrée
 * @a: pointeur vers la première case de la matrice (casté en int *)
 * @size: taille de la matrice (size x size)
 *
 * Description: calcule la diagonale principale (haut-gauche → bas-droite)
 * et la diagonale secondaire (haut-droite → bas-gauche)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int somme_diag1 = 0;
	int somme_diag2 = 0;

	for (i = 0; i < size; i++)
		somme_diag1 += *(a + i * size + i);

	for (i = 0; i < size; i++)
		somme_diag2 += *(a + i * size + (size - 1 - i));

	printf("%d, %d\n", somme_diag1, somme_diag2);
}
