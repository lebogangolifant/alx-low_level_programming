#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	char *leet_str = str;
	int i, j;

	char letters[] = "aAeEoOtTlL";
	char codes[] = "43071";

	for (i = 0; letters[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == letters[i])
		{
			leet_str[j] = codes[i];
		}
	}
	}
	return (leet_str);
}
