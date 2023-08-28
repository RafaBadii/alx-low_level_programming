#include "main.h"

/**
 * _memcpy - function that copies memory to area
 * @dest: char pointer
 * @src: char source
 * @n: char bytes from src to dest
 * Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* copy string in array */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
