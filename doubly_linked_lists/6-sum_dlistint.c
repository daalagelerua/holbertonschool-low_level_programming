#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data 'n' from the list
* @head:
* Return: sum of data 'n' or 0 if empty
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
	{
	sum += head->n; /*ajouter la valeur 'n' a 'sum'*/
	head = head->next; /*passer au noeud suivant*/
	}
return (sum); /*return totale*/
}

