#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: char pointer
 * @c: char constant
 * Return: pointer first occur of c in `s`, or `NULL` if not found
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
