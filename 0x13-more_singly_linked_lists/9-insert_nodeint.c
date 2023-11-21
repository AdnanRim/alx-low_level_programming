#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to pointer of first node of list
 * @idx: index of the list where the new node should be added
 * @n: data for new node
 * Return: address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int i;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
current = *head;
for (i = 0; i < (idx - 1); i++)
{
if (current->next == NULL)
return (NULL);
current = current->next;
}
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
