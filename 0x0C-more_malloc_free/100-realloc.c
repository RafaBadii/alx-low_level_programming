#include "main.h"

/**
 * _realloc - Function creates an array of integers
 * @ptr: char pointer of memory previously allocated
 * @old_size: unsigned int size in bytes
 * @new_size: unsigned int size in bytes
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *pr, *nstr;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pr = malloc(new_size);
		if (pr == NULL)
			return (NULL);
		return (pr);
	}
	pr = malloc(new_size);
	if (pr == NULL)
		return (NULL);
	nstr = ptr;
	for (x = 0; x < old_size; x++)
		*(pr + x) = *(nstr + x);
	free(ptr);
	return (pr);
}
