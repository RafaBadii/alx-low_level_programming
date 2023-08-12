#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: A C program that prints the alphabet in lowercase.
 *
 * Return: Always - (Success)
*/

int main(void)
{
	char i = 97;

	while (i <= 122)
	{	putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
