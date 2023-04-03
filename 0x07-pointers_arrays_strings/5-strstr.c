#include "main.h"
#include <stddef.h>

/**
 * _strstr - Write a function that locates a substring.
 *
 * @needle:char
 * @haystack:char
 *
 * Return:null
 */


char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
