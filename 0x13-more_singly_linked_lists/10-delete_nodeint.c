#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to pointer of first node of list
 * @index: index of node to delete, starting from 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t *previous;
unsigned int i;
if(*head == NULL)
return (-1);
if(index == 0)
{
current = *head;
*head = (*head)->next;
free(current);
return (1);
}
current = *head;
for(i = 0; i < (index - 1); i++)
{
if(current->next == NULL)
return (-1);
previous = current;
current = current->next;
}
previous->next = current->next;
free(current);
return (1);
}
