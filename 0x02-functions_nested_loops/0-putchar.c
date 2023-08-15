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
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8 ; i++)
		_putchar(str[i]);

	putchar('\n');
	return (0);
}
