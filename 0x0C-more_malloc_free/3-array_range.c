#include "main.h"

/**
 * array_range - Function creates an array of integers
 * @min: int minimum size
 * @max: int maximum size
 * Return: NULL if malloc fails or min > max
*/

int *array_range(int min, int max)
{
	int *ptr, x;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		*(ptr + x) = min;

	return (ptr);
}
