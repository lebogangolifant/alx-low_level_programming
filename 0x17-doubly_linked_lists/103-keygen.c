#include <stdio.h>
#include <string.h>

#define KEY_LENGTH 7

/**
 * generate_key - Generates a valid key based on the provided username.
 * @username: The username for which to generate the key.
 * @key: The buffer to store the generated key.
 *
 * Return: None.
 */

void generate_key(const char *username, char *key)
{
	int index;

	for (index = 0; index < KEY_LENGTH; index++)
	{
		key[index] = username[index % strlen(username)]
			^ (index * index);
	}

	key[index] = '\0';
}

/**
 * main - Entry point of the keygen program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 on failure.
 */

int main(int argc, char *argv[])
{
	char key[KEY_LENGTH + 1];

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	generate_key(argv[1], key);

	printf("%s\n", key);

	return (0);
}
