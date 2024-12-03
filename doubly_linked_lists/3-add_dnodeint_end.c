#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: first node
* @n: data of node
* Return: adress of new element or NULL if failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp; /*nouveau noeud, pointeur temp pour parcourir liste*/

if (head == NULL) /*verif pointeur valide*/
	return (NULL);

new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
/*initialiser le nouveau noeud*/
new->n = n; /*affecter la valeur n de l'ancien au nouveau noeud*/
new->next = NULL; /*new sera le dernier noeud donc next sera NULL*/

if (*head == NULL)/*liste vide ? new devient le 1er noeud*/
	{
	*head = new;
	return (new);
	}
temp = *head; /*parcourir la liste jusqu'a se placer sur le dernier noeud*/
while (temp->next != NULL)
	temp = temp->next;
/*ajouter le nouveau noeud a la fin*/
temp->next = new; /*le dernier noeud pointe vers le nouveau*/
new->prev = temp; /*nouveau noeud pointe vers l'ancien dernier*/

return (new);
}
