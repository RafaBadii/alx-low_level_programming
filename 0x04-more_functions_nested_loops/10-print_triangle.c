#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 *@size: variable, the size of the triangle.
 * Return: print character # if size > 0, otherwise print new line.
 */

void print_triangle(int size)
{
	int length, width;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (length = 1; length <= size; length++)
		{
			for (width = 1; width <= size ; width++)
			{
				if ((legth + width) <= size)
					_putchar(32);
				else
					_putchar(35);
			}
		_putchar('\n');
		}
	}
}
