#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: str;
*/

char *cap_string(char *str)
{
	int x, y;
	int flag;
	char sig[] = ",;.!?(){}\n\t\" ";

	for (x = 0, flag = 0; str[x] != '\0'; x++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			flag = 1;
		for (y = 0; sig[y] != '\0'; y++)
		{
			if (sig[y] == str[x])
				flag = 1;
		}

		if (flag)
		{
			if (str[x] >= 97 && str[x] <= 122)
			{
				str[x] -= 32;
				flag = 0;
			}
			else if (str[x] >= 65 && str[x] <= 92)
				flag = 0;
			else if (str[x] >= 48 && str[x] <= 59)
				flag = 0;
		}
	}
	return (str);
}
