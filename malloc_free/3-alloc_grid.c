#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - crée une grille 2D d'entiers initialisés à 0
 * @width: largeur de la grille
 * @height: hauteur de la grille
 *
 * Return: pointeur vers la grille, ou NULL en cas d'échec
 */
int **alloc_grid(int width, int height)
{
    int **grille;
    int i, j;


    if (width <= 0)
        return NULL;
    if (height <= 0)
        return NULL;


    grille = malloc(sizeof(int *) * height);
    if (grille == NULL)
        return NULL;

/
    for (i = 0; i < height; i++)
    {
        grille[i] = malloc(sizeof(int) * width);
        if (grille[i] == NULL)
        {
 
            for (j = 0; j < i; j++)
                free(grille[j]);
            free(grille);
            return NULL;
        }

        for (j = 0; j < width; j++)
            grille[i][j] = 0;
    }

    return grille;
}
