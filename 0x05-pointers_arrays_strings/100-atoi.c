#include "main.h"
/**
 * _atoi - function that converts a string to an integer
 *
 * @s: pointer to be converted
 *
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int i = 0;

	unsigned int tot = 0;
	int a = 1;
	int d = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			a *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			d = 1;
			tot = (tot * 10) + (s[i] - '0');
			i++;
		}

		if (d == 1)
		{
			break;
		}

		i++;
	}

	tot *= a;
	return (tot);
}
