#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t i;
for(i = 0; h != NULL; i++)
{
h = h->next;
}
return (i);
}
