#include "main.h"

/**
 * swap_int - print swap values
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
