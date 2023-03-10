#include"main.h"

/**
 * _strncpy - copies at most n characters from the src string to dest string
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
