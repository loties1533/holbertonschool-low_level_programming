#include "main.h"
/**
 * reverse_array - inverse le contenu d'un tableau d'entiers
 * @array: tableau d'entiers à inverser
 * @size: nombre d'éléments dans le tableau
 */
void reverse_array(int *array, int size)
{
    int debut = 0;      
    int fin = size - 1;  
    int temp;;


        while (debut < fin)
    {

        temp = array[debut];
        array[debut] = array[fin];
        array[fin] = temp;

       
         debut++;
         fin--;
    }
}