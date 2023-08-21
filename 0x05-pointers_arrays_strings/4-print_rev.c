#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * Follow with new line
 * @s: char pointer
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])  /* count the length of the string */
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

