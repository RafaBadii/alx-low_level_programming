#include "main.h"

/**
 * _strcat - function concatenate two strings
 * @dest: char string 1
 * @src: char string 2
 * Return: pointer to resulting string `dest`
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	/* find the size of dest */
	for (x = 0; dest[x] != '\0'; x++)
		;

	/* appends the src string to the dest string */
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
