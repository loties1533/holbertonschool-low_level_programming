#include "main.h"

/**
 * more_numbers - affiche les nombres de 0 à 14 dix fois
 */
void more_numbers(void)
{
	int li, co;

	for (li = 0; li < 10; li++) /* lignes */
	{
		for (co = 0; co <= 14; co++) /* nombres sur chaque ligne */
		{
			if (co >= 10)
				_putchar('0' + co / 10); /* dizaines */
			_putchar('0' + co % 10);     /* unités */
		}
		_putchar('\n'); /* nouvelle ligne */
	}
}
