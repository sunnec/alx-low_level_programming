#include "main.h"
/**
 * rot13 - function that encodes a string into rot13
 *
 * @s: string to encode
 *
 * Return: s
 */
char *rot13(char *s)
{
	int d,
	    i;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (d = 0; *(s + d); d++)
	{
		for (i = 0; i < 52; i++)
		{
			if (a[i] == *(s + d))
			{
				*(s + d) = b[i];
				break;
			}
		}
	}
	return (s);
}
