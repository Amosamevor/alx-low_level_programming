#include "main.h"

/**
 * _print_rev_recursion - Prints a string,followed by (\n)
 * @s: String in reverse
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
putchar(*s);
}

