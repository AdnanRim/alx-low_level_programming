#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
