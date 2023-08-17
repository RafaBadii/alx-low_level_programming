#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 - 14, followed by a new line
 * Return: Always 0 Success
*/

void more_numbers(void)
{
	int row, number, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{

			number = count;
			if (count > 9)
			{
				_putchar(1 + 48);  /* to print 1 */
				number = count % 10;  /* to print the num 1x, x */
			}
		_putchar(number + 48);

		}
	}
	_putchar('\n');
}
