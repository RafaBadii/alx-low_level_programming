#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: char pointer
 * @b: char pointer constant
 * @n: type char bytes of mem pointed by s with constant byte b
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
