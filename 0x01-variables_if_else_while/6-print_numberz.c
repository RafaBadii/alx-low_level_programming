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
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar("\n");
	return (0);
}
