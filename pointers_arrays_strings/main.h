#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - Contient les prototypes des fonctions pour le projet
 *
 * Ce fichier d'en-tête déclare toutes les fonctions utilisées
 * 
 */
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
void reverse_array(int *a, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void _puts(char *str);
int _strlen(char *s);
void swap_int(int *a, int *b);
void reset_to_98(int *n);
int _putchar(char c);
void print_rev(char *s);
void rev_string(char *s);

#endif /* MAIN_H */