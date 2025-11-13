#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - Contient les prototypes des fonctions pour le projet
 *
 * Ce fichier d'en-tête déclare toutes les fonctions utilisées
 * 
 */
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
void _puts_recursion(char *s);
int _putchar(char c);


#endif /* MAIN_H */