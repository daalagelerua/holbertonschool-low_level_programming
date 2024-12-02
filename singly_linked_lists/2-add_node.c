#include "lists.h"

/**
* add_node - add a new node at the beginning of a list_t list
* @head: ptr to ptr to list_t struct
* @str: const ptr to string
* Return: address of the new element or NULL if failure
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));

if (new == NULL || head == NULL)
	return (NULL);

new->str = strdup(str);
new->next = *head;
new->len = strlen(str);
*head = new;

return (new);
}
