#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 */

void times_table(void)
{
	int number;
	int multiply;
	int answer;

		for (number = 0; number < 10; number++)
		{
			_putchar(48);
			for (multiply = 1; multiply <= 9; multiply++)
			{
				_putchar(',');
				_putchar(' ');

				answer = number * multiply;

				if (answer <= 9)
					_putchar(' ');
				else
					_putchar((answer / 10) + 48);
					_putchar((answer % 10) + 48);
			}
			_putchar('\n');
		}
}
