#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: first node
* @n: data of node
* Return: address of the new element or NULL if failure
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new; /*nouveau noeud*/

new = malloc(sizeof(dlistint_t)); /*allocation memoire nouveau noeud*/
	if (new == NULL)
	return (NULL);

new->n = n; /*stocker valeur dans nouveau noeud*/
new->prev = NULL; /*new sera le 1er noeud donc prev sera NULL*/
new->next = *head; /*head deviendra le noeud suivant donc next sera *head*/

if (*head != NULL) /*ajuster la valeur de prev dans head qui deviendra new*/
	(*head)->prev = new;

*head = new; /*MAJ pointeur head pour pointer sur new*/
/*autrement dis new devient le nouveau head*/
return (new);
}
