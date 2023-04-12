#include "main.h"
/**
 *get_endianness - function which will checks the endianness
 *
 *Return: 0 if big endian, and 1 if little endian
 */

int get_endianness(void)
{
	int elly;
	char *p;

	elly  = 1;
	p = (char *)&elly;

	if (*p == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
