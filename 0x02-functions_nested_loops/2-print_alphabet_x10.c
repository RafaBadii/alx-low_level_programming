#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet (a-z) 10 times using putchar.
 *
 * Return: void.
*/

void print_alphabet_x10(void)
{
	int i, letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}

}
