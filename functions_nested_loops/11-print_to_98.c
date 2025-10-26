#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - affiche tous les nombres naturels de n à 98
 * @n: point de départ
 */
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			printf("%d", num);
			if (num != 98)
				printf(", ");
		}
	}
	else
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", num);
			if (num != 98)
				printf(", ");
		}
	}
	printf("\n");
}
