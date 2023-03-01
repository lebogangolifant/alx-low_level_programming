#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char *leet_str = str;

	for (i = 0; str[i]; i++)
	{

	for (j = 0; "aAeEoOtTlL"[j]; j++)
	{
		if (str[i] == "aAeEoOtTlL"[j])
		{
			leet_str[i] = "43071"[j];
			break;
		}
	}

	}
	return (leet_str);
}
