#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src,
 *			including the terminating null byte (\0),
 *			to the buffer pointed to by dest.
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to `dest`
 *
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
