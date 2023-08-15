#include "main.h"

/**
 * print_sign - print the sign of the number.
 *
 *@n: the checked number.
 *
 * Return: 1 and + if positive
 * 0 and 0 if n is zero
 * -1 and - if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
