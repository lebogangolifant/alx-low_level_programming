#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.";
    char *encoded_str = leet(str);

    printf("%s\n", encoded_str);
    printf("%s\n", encoded_str);

    return 0;
}

