#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Decription: A C program
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive %i \n", n);
	else if (n == 0)
		printf("is zero %i \n", n);
	else
		printf("is negative %i \n", n);
	return (0);

}
