#include "main.h"

/**
 * count_words - Count the number of words in a string
 * @str: The string to count the words in
 *
 * Return: The number of words in the string
 */

static int count_words(char *str)
{
	int n_words = 0;
	int in_word = 0;

	while (*str)

	{
		if (*str == ' ')
		{
			in_word = 0;
		} else if (!in_word)
		{
			in_word = 1;
			n_words++;
		}
		str++;
	}
	return (n_words);
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
	int i;
	char **words = malloc(sizeof(char *) * (count_words(str) + 1));

	if (words == NULL)
		return (NULL);

	i = 0;

	while (*str != '\0')
	{
		char *word = extract_word(str);

		if (word != NULL)
		{
			words[i] = word;
			i++;
		}
		str += strlen(word) + 1;
	}
	words[i] = NULL;
	return (words);
}
