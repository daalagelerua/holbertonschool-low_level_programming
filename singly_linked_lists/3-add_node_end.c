#include "lists.h"

/**
* add_node_end - add a new node a the end of the list
* @head: first element of the list
* @str: string to be added to new node
* Return: adress of new element or NULL if failure
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new; /*nouveau noeud*/
list_t *temp; /*pointeur temporaire pour parcourir la liste*/

if (head == NULL || str == NULL) /*verifier si la liste est vide*/
	return (NULL);

new = malloc(sizeof(list_t)); /*allouer memoire pour nouveau noeud*/
	if (new == NULL)
		return (NULL);

new->str = strdup(str); /*copie la chaine*/
new->len = strlen(str); /*calcul sa longueur*/
new->next = NULL; /*le nouveau noeud sera le dernier*/

if (*head == NULL) /*si la liste est vide le nouveau noeud devient la tete*/
	{
	*head = new;
	return (new);
	}
temp = *head;
while (temp->next != NULL) /*parcourir la liste jusqu'au dernier noeud*/
	temp = temp->next;

temp->next = new; /*ajouter le nouveau noeud a la fin*/

return (new);
}
