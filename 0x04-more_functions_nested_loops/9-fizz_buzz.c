#include <stdio.h>
#include "main.h"

/**
 * main - print numbers
 *
 * prints the numbers from 1 to 100, followed by a new line.
 * print Fizz for numbers that multiples of three
 * print Buzz for numbers that multiples of five
 * For numbers multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0 - (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");

		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");

		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");

		else
			printf("%i", n);
		if (n < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
