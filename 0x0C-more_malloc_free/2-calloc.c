#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int size of elements
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	char *str;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (ptr);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	str = (char *)ptr;
	for (x = 0; x < (nmemb * size); x++)
		*(str + x) = 0;

	return (str);
}
