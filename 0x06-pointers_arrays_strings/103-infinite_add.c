#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * get_digit - get the digit value of a character
 * @c: the character to convert to a digit value
 *
 * Return: the digit value of the character, or -1 if it's not a digit
 */

int get_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (-1);
}

/**
 * reverse_string - reverse a string in place
 * @s: the string to reverse
 */

void reverse_string(char *s)
{
	int i, j;
	char c;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
 * infinite_add - add two strings representing integers
 * @n1: the first string
 * @n2: the second string
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result string, or NULL if the result does not fit
 *         in the buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int i, j, k = 0;
	int carry = 0;
	int digit1, digit2, sum;

	/* Check if the result will fit in the buffer */
	if (len1 + len2 > size_r)
		return (NULL);

	/* Add digits from right to left */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 ||
			carry; i--, j--, k++)
	{
		digit1 = i >= 0 ? get_digit(n1[i]) : 0;
		digit2 = j >= 0 ? get_digit(n2[j]) : 0;
		sum = digit1 + digit2 + carry;
		carry = sum >= 10;
		r[k] = sum % 10 + '0';
	}

	r[k] = '\0';

	/* Reverse the result string */
	reverse_string(r);
	return (r);
}
