#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
size_t len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}