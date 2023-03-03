#include "main.h"

/**
 * leet - function encodes a string into 1337
 *
 * @s: string to encode
 *
 * Return: s
 */
char *leet(char *s)
{
	int i, d;
	char c[] = "aAeEoOtTlL";
	char l[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (c[d] == s[i])
				s[i] = l[d];
		}
	}
	return (s);
}
