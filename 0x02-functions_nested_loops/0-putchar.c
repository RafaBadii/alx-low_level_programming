#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Decription: A C program prints _putchar
 *
 * Return: Always - (Success)
*/

int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; i < 8 ; i++)
		putchar('str[i]');

	putchar('\n');
	return (0);
}
