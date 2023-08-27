#include "main.h"

/**
 * _strncat - function concatenate two strings
 * @dest: char str 1
 * @src: char str 2
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	/* find the size of dest */
	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--)
	{
		dest[a] = src[b];
		a++;
	}

	return (dest);
}
