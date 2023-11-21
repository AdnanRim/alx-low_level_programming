#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of list
 * @index: index of node, starting from 0
 * Return: nth node, or NULL if index is out of bounds of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;
if (head == NULL)
return (NULL);
current = head;
for (i = 0; current != NULL && i <= index; i++)
{
if (i == index)
return (current);
current = current->next;
}
if (i < index)
return (NULL);
return (current);
}
