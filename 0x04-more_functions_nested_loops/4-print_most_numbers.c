#include "main.h"

/**
 * print_most_numbers - print numbers from 0-9 except 2 and 4
 * Retern: Always zero
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
			i++;
		}
		else
			i++;
	}
	_putchar('\n');
}
