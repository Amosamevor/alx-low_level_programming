#include <stdio.h>

/**
 * main - Entry point,also program that prints all arguments it receives.
 * @argc: count.
 * @argv: string arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
