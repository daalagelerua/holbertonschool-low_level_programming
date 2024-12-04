#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at wanted index
* @head: double pointer to first node
* @index: node that should be deleted (starts at 0)
* Return: 1 on success -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i;
if (*head == NULL) /*la liste est vide, rien a supprimer*/
	return (-1);

if (index == 0) /*le node a suppr est la head*/
	{
	*head = temp->next; /*MAJ de head pour qu'il pointe sur next node*/
	if (*head != NULL) /*si le next node existe*/
		(*head)->prev = NULL; /*son prev devient NULL parce qu'il devient 1er*/
	free(temp); /*free l'ancien head*/
	return (1);
	}

/*si node au milieu*/
for (i = 0; temp != NULL && i < index; i++) /*parcourir jusqu'a l'index*/
	temp = temp->next;

if (temp == NULL) /*si index trop grand*/
	return (-1);

if (temp->next != NULL) /*si le noeud a un suivant*/
	temp->next->prev = temp->prev; /*prev du next node devient prev de temp*/
if (temp->prev != NULL) /*si le noeud a un predent*/
	temp->prev->next = temp->next; /*next du prev node devient next de temp*/

free(temp);

return (1);
}
