#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: Prints number 0-9 using putchar func.
 *
 * Return: Always - (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
