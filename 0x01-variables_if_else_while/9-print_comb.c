#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: prints all the numbers of base 16 in lowercase.
 *
 * Return: Always - (Success)
*/

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		putchar(',');
		putchar(' ');

		i++;
	}
	putchar('\n');
	return (0);
}
