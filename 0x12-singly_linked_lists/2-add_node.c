#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strlen - function returns the length of a string
 *
 * @s : s is a character
 *
 * Return: returns counter
 */
int _strlen(const char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
