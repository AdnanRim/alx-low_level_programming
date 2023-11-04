#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 * Return: Pointer to the allocated memory
 * If malloc fails, the function terminates the process with status 98
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
fprintf(stderr, "Error: Heap allocation failed\n");
exit(98);
}
return (p);
}
