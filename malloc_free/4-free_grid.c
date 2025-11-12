#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libère une grille 2D créée par alloc_grid
 * @grid: pointeur vers la grille
 * @height: hauteur de la grille
 *
 * Retour : rien
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    for (i = 0; i < height; i++)
        free(grid[i]);

    free(grid);
}