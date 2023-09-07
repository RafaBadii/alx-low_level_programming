#include "main.h"

/**
 * *_memset - fill memory with constant byte
 * @s: pointer for the constant
 * @b: constant value
 * @n: maximum bytes
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	while (n--)
		*s++ = b; /*Indix increase*/

	return (str);
}


/**
 * _calloc - function allocates memory for an array, using malloc
 * @nmemb: unsigned int, array length
 * @size: unsigned int size of elements
 * Return: Pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == 0)
		return (NULL);

	_memset(ptr, 0, sizeof(int) * nmemb); /*Zeros*/

	return (ptr);
}
