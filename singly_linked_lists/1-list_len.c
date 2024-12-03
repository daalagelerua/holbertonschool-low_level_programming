#include "lists.h"

/**
* list_len - return number of elements in a linked list_t list
* @h: head of first node
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
size_t count = 0; /*compteur de noeud*/
const list_t *current = h; /*initialisation du pointeur a la tete de liste*/

while (current != NULL)
	{
	current = current->next; /*passer au noeud suivant*/
	count++;
	}
return (count);
}
