#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: The input number
 * @last: Last digit of number
 *
 * Return: the last digit of a value
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = -1 * (n % 10);
		_putchar(last + 48);  /*Ascii 0*/
		return (last);
	}
	else
	{
		last = n % 10;
		_putchar(last + 48);
		return (last);
	}
}
