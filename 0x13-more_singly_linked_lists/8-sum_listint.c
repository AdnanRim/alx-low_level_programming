#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t linked list
 * @head: pointer to head of list
 * Return: sum of all data (n), or 0 if empty
 */
int sum_listint(listint_t *head)
{
listint_t *current;
int sum = 0;
current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
