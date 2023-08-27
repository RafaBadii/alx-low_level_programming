#include "main.h"

/**
 * *_strncpy - Function that copies a string.
 * @dest: string 1
 * @src: string 2
 * @n: number of chars to copy over
 * Return: Always dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		/* copy src string to dest */
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
