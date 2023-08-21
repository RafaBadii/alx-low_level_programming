#include "main.h"

/**
 * swap_int - function swaps the values of two integers
 * @a: int variable 1
 * @b: int variable 2
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;	/* swap = a = 98 */
	*a = *b;	/* a = b = 42 */
	*b = swap;	/* b = swap = a = 98 */

}
