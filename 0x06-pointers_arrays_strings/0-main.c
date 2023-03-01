#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main()
{
	char str1[50] = "Hello, ";
	char str2[] = "world!";
	char *result;

	printf("Before concatenation:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	result = _strcat(str1, str2);

	printf("After concatenation:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("result: %s\n", result);

	return 0;
}
