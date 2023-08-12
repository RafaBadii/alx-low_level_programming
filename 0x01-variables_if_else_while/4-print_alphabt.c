#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: Program prints the alphabet in lowercase except q and e.
 *
 * Return: Always - (Success)
*/

int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		i++;

		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
