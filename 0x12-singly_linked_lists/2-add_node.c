#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to store in the new node
 * Return: Address of the new element or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->next = *head;
*head = new;
return (new);
}
