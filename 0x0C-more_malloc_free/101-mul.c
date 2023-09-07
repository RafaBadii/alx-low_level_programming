#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function prints all arguments received.
 * @argc: int argument
 * @argv: char argument of string.
 * Return: if not receive 2 arg, error
*/

int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;

		printf("%d\n", mul);
	}
	return (0);
}
