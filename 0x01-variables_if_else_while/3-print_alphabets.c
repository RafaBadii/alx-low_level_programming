#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: Program that prints the alphabet in both lower and upper case.
 *
 * Return: Always - (Success)
*/

int main(void)
{
char i = 97, I = 65;
{
	while (i <= 122)
	{	putchar(i);
		i++;
	}
	while (I <= 90)
	{	putchar(I);
		I++;
	}
}
	putchar('\n');
	return (0);
}
