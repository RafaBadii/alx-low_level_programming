#include <stdio.h>

/**
 * main - prints program name folowed by a new line
 * @argc: int argument
 * @argv: char argument of string.
 * Return: 0
*/

int main(int argc, char *argv[])  /* Or use **argv */
{
	(void) argc; /* Avoid warning */

	printf("%s\n", argv[0]);
	return (0);
}
