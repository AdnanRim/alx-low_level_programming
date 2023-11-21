#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer of first node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *previous, *next;
current = *head;
previous = NULL;
while (current != NULL)
{
next = current->next;
current->next = previous;
previous = current;
current = next;
}
*head = previous;
return (*head);
}
