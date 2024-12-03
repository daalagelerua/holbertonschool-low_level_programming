#include "lists.h"

/**
* print_dlistint - prints all element of a dlistint list
* @h: const pointer to first node
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0; /*node counter*/

while (h != NULL) /*parcourir la liste de noeud*/
	{
	printf("%d\n", h->n); /*print valeur du noeud actuel*/
	h = h->next; /*passer au noeud suivant*/
	count++;
	}
return (count);
}
