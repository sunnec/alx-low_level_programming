#include "main.h"
/**
 * str_checker - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @d: left index
 * @i: special index
 * Return: 1 if s is palindrome and 0 if not
 */
int str_checker(char *s1, char *s2, int d, int i)
{
	if (s1[d] == '\0' && s2[i] == '\0')
		return (1);
	if (s1[d] == s2[i])
		return (str_checker(s1, s2, d + 1, i + 1));
	if (s1[d] == '\0' && s2[i] == '*')
		return (str_checker(s1, s2, d, i + 1));
	if (s2[i] == '*')
		return (str_checker(s1, s2, d + 1, i) || str_checker(s1, s2, d, i + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if strings are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
