#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: char string
 * Return: void
*/

void rev_string(char *s)
{
	int i = 10;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
