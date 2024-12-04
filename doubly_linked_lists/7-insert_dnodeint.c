#include "lists.h"

/**
* insert_dnodeint_at_index - insert new node at given index
* @h: double pointer to the first node
* @idx: where to insert new node (start at 0)
* @n: data of new node
* Return: adress of new node or NULL if failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp; /*new node, node precedent l'index demande*/
unsigned i;
if (h == NULL)
	return (NULL);

if (idx == 0) /*si l'index est a 0 faire appel a la fonction add_nodeint*/
	return (add_dnodeint(h, n));

temp = *h; /*init temp sur pointer h, pour ne pas perdre l'acces a head*/
/*parcourir la liste jusqu'au noeud precedent la position ou on veut inserer*/
for (i = 0; temp != NULL && i < idx - 1; i++)
	temp = temp->next; /*a chaque iteration avance temp dans la liste*/

if (temp == NULL) /*si liste trop courte*/
	return (NULL);

if (temp->next == NULL && i == idx - 1) /*si on veut inserer a la fin*/
	return (add_dnodeint_end(h, n));

new = malloc(sizeof(dlistint_t)); /*si insertion au milieu*/
if (new == NULL)
	return (NULL);

new->n = n; /*stocker la donnee*/
new->next = temp->next; /*new node pointe vers l'ancien suivant*/
new->prev = temp; /*le prev de new deveint temp*/

if (temp->next != NULL) /*si temp n'est pas le dernier noeud*/
	temp->next->prev = new; /*le prev du noeud qui suivait temp devient new*/
temp->next = new; /*new devient le noeud suivant de temp*/

return (new);
}
