#include "lists.h"

/**
* list_len - retur n number of elements in a linked list_t list
* @h: head of first node
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current = h;

while (current != NULL)
	{
	current = current->next;
	count++;
	}
return (count);
}
