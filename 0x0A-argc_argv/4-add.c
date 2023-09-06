#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints all arguments received.
 * @argc: int argument
 * @argv: char argument of string.
 * Return: 0, if not receive 2 arg, rt error
*/

int main(int argc, char *argv[])
{
	int x, y, sum;

	(void)argv;
	sum = 0;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[x]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
