#include <stdio.h>

/**
 * main - Entry point, also program that prints
 * the number of arguments passed into it.
 * 
 * @argc: count
 * @argv: arguments string
 *
 * Return: Count of arguments.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}

