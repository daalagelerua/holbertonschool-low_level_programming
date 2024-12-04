#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at wanted index
* @head: double pointer to first node
* @index: node that should be deleted (starts at 0)
* Return: 1 on success -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i;

temp = *head;
for (i = 0; temp != NULL && i < index; i++)
	temp = temp->next;

if (temp == NULL)
	return (-1);

temp->next->prev = temp->prev;
temp->prev->next = temp->next;
free(temp);

return (1);
}
