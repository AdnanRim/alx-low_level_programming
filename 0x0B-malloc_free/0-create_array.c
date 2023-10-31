#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars initialized with a character
 * @size: The size of the array
 * @c: The character to initialize the array with 
 *
 * Return: Pointer to the created array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i = 0;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));  
if (array == NULL)
return (NULL);  
for (; i < size; i++) {
array[i] = c; 
}
return (array);
}
