#include "main.h"

/**
 * string_toupper - Function that reverse the content of an array of int
 * @str: string
 * Return: string str
 */
char *string_toupper(char *str)
{
	int i;

	/* switch from lower to uppercase */
	/*in ASCII 97 - 65 = 32 */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			/* switch to upper */
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
