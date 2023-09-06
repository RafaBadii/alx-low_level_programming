#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments received.
 * @argc: int argument
 * @argv: char argument of string.
 * Return: 0, if not receive 2 arg, rt error
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;	i

	while (--argc) /* Not count prog Name */
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
