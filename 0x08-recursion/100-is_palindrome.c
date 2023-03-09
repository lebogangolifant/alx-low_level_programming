#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: Pointer to the string to get the length of
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _is_palindrome - Check if a string is a palindrome
 *
 * @s: Pointer to the string to check
 * @start: The index of the first character to check
 * @end: The index of the last character to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int _is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (*(s + start) != *(s + end))
		return (0);

	return (_is_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome
 *
 * @s: Pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0 || len == 1)
		return (1);

	return (_is_palindrome(s, 0, len - 1));
}
