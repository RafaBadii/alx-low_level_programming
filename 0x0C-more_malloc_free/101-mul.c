#include "main.h"

/**
 * main - Function prints all arguments received.
 * @argc: int argument
 * @argv: char argument of string.
 * Return: if not receive 2 arg, error
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
