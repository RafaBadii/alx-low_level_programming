#include "main.h"

/**
 * _puts - function prints a string, followed by a new line
 * @str: char pointer
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);	/* Ascii */
		str++;		/* address increment */
	}
	putchar('\n');
}
