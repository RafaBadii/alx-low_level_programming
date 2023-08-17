#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: Print _ if n is greater than 0, new line if equal or less than 0
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
}
