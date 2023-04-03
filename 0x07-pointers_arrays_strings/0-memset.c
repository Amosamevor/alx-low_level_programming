#include "main.h"

/**
 *_memset - function that fills memory with a constant byte.
 *
 * @s: memory area
 * @b: constant bytes
 * @n: bytes filled
 *
 * Return: pointer to the destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
