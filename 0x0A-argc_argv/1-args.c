#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: int argument
 * @argv: char argument of strings
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1); /* Not count the name of the program */
	return (0);
}
