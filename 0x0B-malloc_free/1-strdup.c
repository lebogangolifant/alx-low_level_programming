#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: On success, a pointer to the duplicated string.
 *	On failure, NULL if str is NULL or if insufficient memory was
 *	available.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);

	return (dup_str);
}
