#include "main.h"

/**
 * wrdcnt - Function counts number of words in string
 * @s: string
 * Return: int
*/

int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
			else if (i == 0)
				n++;
	}
	n++;
	return (n);
}

/**
 * strtow - split a string to words
 * @str: string
 * Return: pointer
*/

char **strtow(char *str)
{
	int i, j, x, y, num = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = wrdcnt(str);
	if (num == 1)
		return (NULL);
	w = (char **)malloc(sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[num - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (x = 0; x < wc; x++)
					free(w[x]);
				free(w[num - 1]);
				free(w);
				return (NULL);
			}
			for (y = 0; y < j; y++)
				w[wc][y] = str[i + y];
			w[wc][y] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
