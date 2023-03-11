#include "main.h"

/**
* main - Entry point, calculates the sum of command line arguments
* @argc: Number of arguments passed to the program
* @argv: Array of strings containing the arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *str = argv[i];

		int len = strlen(str);
		int num = 0;

		for (j = 0; j < len; j++)
		{
			if (!isdigit(str[j]))
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (str[j] - '0');
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
