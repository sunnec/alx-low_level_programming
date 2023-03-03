#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int d = 0, i;
	char c[] = " \t\n,;.!?\"(){}";

	while (*(s + d))
	{
		if (*(s + d) >= 'a' && *(s + d) <= 'z')
		{
			if (d == 0)
				*(s + d) -= 'a' - 'A';
			else
			{
				for (i = 0; i <= 12; i++)
				{
					if (c[i] == *(s + d - 1))
						*(s + d) -= 'a' - 'A';
				}
			}
		}
		d++;
	}
	return (s);
}
