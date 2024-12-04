#include "lists.h"

/**
* get_dnodeint_at_index - return node at the position asked
* @head: pointer to first node
* @index: index of wanted node
* Return: pointer to wanted node or NULL if index is false
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int current = 0;

while (head != NULL) /*parcourir la liste*/
	{
	if (current == index) /*si noeud actuel correspond a celui demande*/
		return (head);

	head = head->next; /*passer au noeud suivant*/
	current++; /*incrementer l'index actuel*/
	}
return (NULL); /*si on atteint la fin sans trouver l'index return NULL*/
}
