#include "main.h"

/**
 * print_numbers - function that prints the numbers, from (0-9)
 * return: Always 0
*/

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
