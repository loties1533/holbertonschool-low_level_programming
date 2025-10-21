#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Description: affiche le dernier chiffre d'un nombre aléatoire
 * et indique s'il est >5, =0 ou <6 et !=0
 *
 * Return: 0 si le programme s'exécute correctement
 */
int main(void)
{
	int n;          /* nombre aléatoire */
	int last_digit; /* dernier chiffre du nombre */

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10; /* calcul du dernier chiffre */

	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
