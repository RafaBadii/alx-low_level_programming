#include "main.h"

/**
 * swap_int - function swaps the values of two integers
 * @a: int variable
 * @b: int variable
 * Return: Always 0 Success
*/

void swap_int(int *a, int *b)
{
	int ptr_a = &a;
	int ptr_b = &b;

	printf("a=%d, b=%d\n", *ptr_b, *ptr_a);
}
