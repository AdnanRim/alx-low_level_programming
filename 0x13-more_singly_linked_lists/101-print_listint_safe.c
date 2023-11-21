#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head) {
const listint_t *current = head;
size_t nodes = 0;
size_t visited[100000];
int i = 0;
if(head == NULL)
return 0;
while(current != NULL) {
if(visited[i] == (size_t)current) {
printf("-> [0x%p]\n", (void *)current);
exit(98);
}
visited[i++] = (size_t)current;
printf("[0x%p] %d\n", (void *)current, current->n);
nodes++;
current = current->next;
}
return nodes;
}
