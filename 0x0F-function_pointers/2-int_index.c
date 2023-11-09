#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Finds the index of an integer in an array
 * @array: The array to search
 * @size: Number of elements in @array
 * @cmp: The comparison function
 * Return: The index of the first element for which cmp does not return 0
 * or -1 if no match is found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int)) {
int i;
if (size <= 0 || !array || !cmp)
return (-1);
for (i = 0; i < size; i++) {
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
