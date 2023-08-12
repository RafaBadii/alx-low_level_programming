#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: Program prints numbers using putchar func.
 *
 * Return: Always - (Success)
*/

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i + 0);
		i++;
	}
	putchar("\n");
	return (0);
}
