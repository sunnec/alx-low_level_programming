#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords program 101-crackme
 *
 * Return: 0.
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, d1, d2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		d1 = (sum - 2772) / 2;
		d2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			d1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + d1))
			{
				password[index] -= d1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + d2))
			{
				password[index] -= d2;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
