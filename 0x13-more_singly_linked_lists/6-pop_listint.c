#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: pointer to head of list
 * Return: data of head node, or 0 if empty
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;
if (*head == NULL)
return (0);
tmp = *head;
n = (*head)->n;
*head = (*head)->next;
free(tmp);
return (n);
}
