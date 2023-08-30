#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x  of y.
 * @x: integer
 * @y: integer
 * Return: if y lower than 0 return -1.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	else
	return (x * _pow_recursion(x, y - 1));
}
