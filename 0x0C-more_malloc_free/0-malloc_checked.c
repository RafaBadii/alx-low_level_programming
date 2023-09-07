#include "main.h"

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: unsigned int.
 * Return: Pointer of allocated memory, or 98 in NULL
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98); /* termination */

	return (ptr);
}
