#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	int i;
	char c;

	for (i = 0; str[i]; i++)
	{
		c = str[i];

		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		{
			c += 13;
		}
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		{
			c -= 13;
		}
		str[i] = c;
	}
	return (str);
}
