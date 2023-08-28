#include "main.h"

/**
 * _strspn - function gets the lenght of a prefix substring.
 * @s: char returns the number of bytes
 * @accept: the bytes
 * Return: return x
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (x);
}
