#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated_str;
	char *ptr;
	int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = 0;
	while (*(s1 + s1_len) != '\0')
		s1_len++;

	s2_len = 0;
	while (*(s2 + s2_len) != '\0')
		s2_len++;

	concatenated_str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (concatenated_str == NULL)
		return (NULL);

	ptr = concatenated_str;
	while (*s1 != '\0')
		*(ptr++) = *(s1++);

	while (*s2 != '\0')
		*(ptr++) = *(s2++);

	*ptr = '\0';
	return (concatenated_str);
}
