#include <stdlib.h> 
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to store in the new node
 * Return: Address of the new element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *current;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
}
return (new);
}
