#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 *description: fizz buzz
 *
 * Return: Always
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
