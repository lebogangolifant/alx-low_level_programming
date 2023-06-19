#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to check
 * @accept: The bytes to accept in the prefix substring
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	len = 0;
	for (i = 0; s[i]; i++)
	{

	for (j = 0; accept[j]; j++)
	{
		if (s[i] == accept[j])
		{
			len++;

			break;
		}
	}

	if (!accept[j])

		break;
	}

	return (len);
}
