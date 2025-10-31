#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copie la chaîne pointée par src dans dest
 * @dest: buffer de destination
 * @src: chaîne source à copier
 *
 * Return: pointeur vers dest
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}