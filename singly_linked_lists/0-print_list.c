#include "lists.h"

/**
* print_list - prints all elements of list_t list
* @h: ptr to first node
* Return: number of nodes
*/


size_t print_list(const list_t *h)
{
const list_t *current = h; /*initialisation du pointeur a la tete de liste*/
size_t count = 0; /*compteur de noeud*/

while (current != NULL)
	{
	if (current->str == NULL)
		{
		printf("[0] (nil)\n");
		}
	else
		{/*si non NULL afficher la chaine et sa longueur*/
		printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next; /*passer au noeud suivant*/
		count++;
	}
return (count);
}
