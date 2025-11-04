#include "main.h"

/**
 * print_chessboard - affiche un échiquier 8x8
 * @a: pointeur vers un tableau 8x8 de caractères
 */
void print_chessboard(char (*a)[8])
{
    int li , co;

    for(li = 0;li < 8; li ++)
    {
        for(co = 0; co < 8; co ++ )
        {
            _putchar (a[li][co]);
            
        }
        _putchar('\n'); 
    }
}