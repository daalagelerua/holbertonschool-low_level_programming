#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
* @head: first node of the list
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL) /*parcourir la liste*/
	{
	temp = head->next; /*stocker l'adresse du noeud suivant dans temp*/
	free(head); /*liberer le noeud actuel*/
	head = temp; /*passer au noeud suivant*/
	}
}
