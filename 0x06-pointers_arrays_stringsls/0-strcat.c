#include "main.h"

/**
 * _strcat - function concatenate two strings
 * @dest: char string 1
 * @src: char string 2
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, x;

	/* find the size of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	for (x = 0; src[x]; x++)
	{
		dest[i++] = src[x];
	}
	return (dest);
}
