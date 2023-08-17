#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: print '_' if n is greater than 0, otherwise print new line
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
}
