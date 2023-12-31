#include "main.h"

/**
 * _strpbrk - function search for a string of any set of bytes.
 * @s: char pointer
 * @accept: char bytes
 * Return: p to bytes in `s`, `null` if no such byte type is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}
	return ('\0');
}
