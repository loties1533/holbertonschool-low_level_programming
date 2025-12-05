#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer stored in the node
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: node structure for a doubly linked list
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/*affiche tout les elements d une liste*/
size_t print_dlistint(const dlistint_t *h);

/*compte nombres de noeud dans une liste*/
size_t dlistint_len(const dlistint_t *h);

/*ajout d un noeud au debut de liste*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/*ajoute un noeud en fin de liste */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/*libere les noeud de la liste*/
void free_dlistint(dlistint_t *head);

/*renvoie noeud a un index precis*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/*retourn somme de tout les noeud de la liste*/
int sum_dlistint(dlistint_t *head);

/*insert un noeud a un index donnée*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/*supprime le noeud a un index donnée*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
