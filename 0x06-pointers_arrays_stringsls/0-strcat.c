#include "main.h"

/**
 * _strcat - function concatenate two strings
 * @dest: char string 1
 * @src: char string 2
 * Return: pointer to resulting string `dest`
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
