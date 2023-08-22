#include "main.h"

/**
 * puts_half - function print half of string.
 * @str: char pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++) /* length of string */
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)	/* get half and increase */
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
