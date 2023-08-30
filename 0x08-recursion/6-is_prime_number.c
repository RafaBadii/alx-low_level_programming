#include "main.h"
#include <stdio.h>

/**
 * funct_prime - Allows operation of _sqrt_recursion
 * @x: int
 * @y: int operator
 * Return: sqrt int or -1 if not int
*/

int funct_prime(int x, int y)
{
	if ((y * y) == x || x < 0)
		return (0);

	else if ((y * y) > x)
		return (1);

	else
		return (funct_prime(x, (y + 1)));
}

/**
 * is_prime_number - function that returns the natural sqr root number.
 * @n: int
 * Return: 1 if input is integer otherwise is 0
*/

int is_prime_number(int n)
{
	return (funct_prime(n, 0));
}
