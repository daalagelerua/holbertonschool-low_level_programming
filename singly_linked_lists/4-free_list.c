#include "lists.h"

/**
* free_list - free a list_t list
* @head: first element of the list
*/

void free_list(list_t *head)
{
list_t *temp; /*pointeur temporaire pour sauvergarder le prochain noeud*/

while (head != NULL)
	{
	temp = head->next; /*saugarder le prochain noeud*/
	free(head->str); /*liberer la memoire de la chaine*/
	free(head); /*liberer le noeud actuel*/
	head = temp; /*passer au noeud suivant*/
	}
}
