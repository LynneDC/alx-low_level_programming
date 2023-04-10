#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: converted numbers
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;

while (*b == '\0')
{
if (*b != '\0' && *b != '1')
{
return (0);
}
i = (i << 1) | (*b & 1);
b++;
}
return (i);
}


