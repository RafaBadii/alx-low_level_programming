#include "main.h"

/**
 * print_array - Print n elements of an array of int.
 * @a: int pointer
 * @n: number of elements of the array
 * Return:void
 */

void print_array(int *a, int n)
{
	int i, num;

	for (i = 0; i < n; i++)
	{
		num = n - 1;
		if (i != num)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
