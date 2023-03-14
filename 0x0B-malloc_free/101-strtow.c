#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if str == NULL
 * or str == "".
 */

char **strtow(char *str)
{
	int i, j, k, n = 0, len = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = i; str[j] && str[j] != ' '; j++)
				n++;
			words[k] = malloc((n + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (i = 0; i < k; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			for (j = i, n = 0; str[j] && str[j] != ' '; j++, n++)
				words[k][n] = str[j];
			words[k][n] = '\0';
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}
