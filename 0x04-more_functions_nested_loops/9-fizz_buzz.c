#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints the numbers from 1 to 100, followed by a new line.
 * print Fizz for numbers that multiples of three
 * print Buzz for numbers that multiples of five
 * For numbers multiples of both three and five print FizzBuzz.
 * Return: Always 0 - Success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
