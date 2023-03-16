#include "main.h"

/**
 * string_nconcat - concatenates two strings, up to n bytes of s2
 *
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to concatenate from s2
 *
 * Return: pointer to concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc((len1 + n + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		new_str[i] = s2[j];
	new_str[i] = '\0';

	return (new_str);
}
