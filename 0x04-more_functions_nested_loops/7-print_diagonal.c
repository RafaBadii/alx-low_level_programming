#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times \ character should be printed
 * Return: print \ if n is greater than 0, otherwise print new line
*/

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)   /* create space */
		{
			for (space = 1; space <= i; space++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}