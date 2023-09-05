#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function create array of char.
 * @size: unsigned int of the memory to print.
 * @c: char memory value.
 * Return: Null if fails or if size is 0.
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);

	if (ptr == 0)
		return (0);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
