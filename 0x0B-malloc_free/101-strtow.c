#include "main.h"

/**
 * count_words - Count the number of words in a string
 * @str: The string to count the words in
 *
 * Return: The number of words in the string
 */

int count_words(char *str)
{
	int count = 0;

	while (*str)
	{
		while (*str && *str == ' ')
		{
			str++;
		}

		if (*str && *str != ' ')
		{
			count++;

			while (*str && *str != ' ')
			{
				str++;
			}
		}
	}
	return (count);
}

/**
 * extract_word - Extract a word from a string
 * @str: The string to extract the word from
 *
 * Return: A pointer to the extracted word
 */

static char *extract_word(char *str)
{
	char *start = str;
	char *word;

	while (*str && *str != ' ')
	{
		str++;
	}
	word = (char *)malloc((str - start + 1) * sizeof(char));

	if (word == NULL)
	{
		return (NULL);
	}
	strncpy(word, start, str - start);

	word[str - start] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if str == NULL
 * or str == "".
 */

char **strtow(char *str)
{
	char **words;
	int n_words, i;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	n_words = count_words(str);

	words = malloc((n_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n_words; i++)
	{
		while (*str && *str == ' ')
		{
			str++;
		}

		words[i] = extract_word(str);

		if (words[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(words[i]);
			}

			free(words);
			return (NULL);
		}
		str += strlen(words[i]);
	}
	words[n_words] = NULL;
	return (words);
}
