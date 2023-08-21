#include "main.h"

/**
 * _puts - function prints a string, followed by a new line
 * @str: char pointer
 * Return: str
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);	/* Ascii */
		str++;		/* address increment */
	}
	_putchar('\n');
}
