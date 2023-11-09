#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates over an array and applies a function
 * @array: The array to iterate over
 * @size: Number of elements in @array
 * @action: The function to call on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int)) {
size_t i;
if(array && action) {
for(i = 0; i < size; i++)
action(array[i]);
}
}
