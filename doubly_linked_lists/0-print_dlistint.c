#include "lists.h"

/**
* print_dlistint - prints all element of a dlistint list
* @h: const pointer to first node
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0; /*node counter*/

while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
return (count);
}
