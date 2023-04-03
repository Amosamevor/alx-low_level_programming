#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s:char
 * @accept:char
 *
 * Return:null
 */

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
