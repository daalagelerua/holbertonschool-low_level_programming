#include "lists.h"

/**
* add_node_end - add a new node a the end of the list
* @head: first element of the list
* @str: string to be added to new node
* Return: adress of new element or NULL if failure
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp;

if (head == NULL)
	{
	new = malloc(sizeof(list_t));
	new = *head;
	}
else
{
temp = *head;
while (temp->next != NULL)
	{
	*head++;
	temp++;
	}
new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	else
		{
		new->str = strdup;
		new->len = strlen;
		new->next = NULL;
		temp->next = new;
		}
return (new);
}
