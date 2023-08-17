#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: variable, size of the square
 * Return: print # if the size > 0, otherwise print new line
*/

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
