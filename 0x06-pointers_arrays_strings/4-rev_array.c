#include "main.h"

/**
 * reverse_array - Function that reverse the content of an array of int
 * @a: Type int
 * @n: number of elements of the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int x, y, tmp;

	/* y = (n - 1), index start from 0 */
	/* y = n, Array length */
	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
	}
}
