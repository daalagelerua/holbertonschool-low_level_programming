#include "lists.h"

/**
* add_node - add a new node at the beginning of a list_t list
* @head: ptr to ptr to list_t struct
* @str: const ptr to string
* Return: address of the new element or NULL if failure
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new; /*nouveau noeud*/

new = malloc(sizeof(list_t));

if (new == NULL || head == NULL)
	return (NULL);

new->str = strdup(str); /*copie str dans nouvel espace memoire str de new*/
new->len = strlen(str); /*stock la longueur de la chaine dans len de new*/
new->next = *head; /*fait pointer next de new vers l'actuelle tete de liste*/
*head = new; /*met a jour la tete de liste pour qu'elle pointe vers new*/

return (new);
}
