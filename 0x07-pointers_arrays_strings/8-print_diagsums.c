#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function print the sum of the two digonal of a square.
 * @a: int type
 * @size: array size
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i = 0, value = 0, sum1 = 0, sum2 = 0;

	while (i < (size * size))
	{
		value = a[i];
		sum1 += value;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		value = a[i];
		sum2 += value;
		i = i + (size - 1);
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
