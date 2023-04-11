#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint - function converts a binary number to unsigned integer
 *
 *@b: pointer to string of chars
 *
 *Return: converted unsigned int, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	const char *p;
	unsigned int value;

	p = b;
	value = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*p != '\0')
	{
		if (*p == '0')
		{
			value = (value * 2) | 0;
		}
		if (*p == '1')
		{
			value = (value * 2) | 1;
		}
		if (*p != '0' && *p != '1')
			return (0);
	++p;
	}
	return (value);
}
