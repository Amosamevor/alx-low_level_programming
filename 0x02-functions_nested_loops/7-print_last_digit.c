#include "main.h"

/**
 * print_last_digit - function print
 *@w:pararmeter
 *
 * Return:a
 */

int print_last_digit(int w)
{
	int a;

	a = w % 10;
	if (w < 0)
		a = -a;
	_putchar(a + '0');
	return (a);

}
