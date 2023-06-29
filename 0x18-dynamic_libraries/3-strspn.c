#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring.
 *
 * @s:null
 * @accept:null
 *
 * Return:count
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (!accept[j])
{
return (count);
}
}

return (count);
}
