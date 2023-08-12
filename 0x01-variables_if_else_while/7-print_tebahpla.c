#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: Prints the lowercase alphabet in reverse.
 *
 * Return: Always - (Success)
*/

int main(void)
{
	int ascii_value = 'z';    /* Start with the ASCII value of 'z'*/

	while (ascii_value >= 'a')    /* Loop from 'z' to 'a' */
	{
		putchar(ascii_value);     /* Print the lowercase character */
		ascii_value--;       /* Decrement the ASCII value */
	}
	putchar('\n');
	return (0);
}
