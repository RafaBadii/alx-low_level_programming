#include "main.h"

/**
 * wrdcnt - Function counts the number of words in a string.
 * @str: string to count.
 * Return: int of number of words.
*/

int wrdcnt(char *str)
{
	int i, number = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				number++;
		}
			else if (i == 0)
				number++;
	}
	number++;
	return (number);
}


/**
 * strtow - Function split a string to words.
 * @str: string to split.
 * Return: pointer of the splited words.
*/

char **strtow(char *str)
{
	int i, j, x, y, num = 0, wc = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num = wrdcnt(str);
	if (num == 1)
		return (NULL);

	words = (char **)malloc(sizeof(char *));
	if (words == NULL)
		return (NULL);

	words[num - 1] = NULL;
	i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			words[wc] = (char *)malloc(j * sizeof(char));

			j--;
			if (words[wc] == NULL)
			{
				for (x = 0; x < wc; x++)
					free(words[x]);
				free(words[num - 1]);
				free(words);
			return (NULL);
			}
			for (y = 0; y < j; y++)
				words[wc][y] = str[i + y];
			words[wc][y] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (words);
}
