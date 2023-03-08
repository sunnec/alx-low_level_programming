#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: the string to be printed
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * palindromeChecker - check if s is palindrome
 * @s: string base address
 * @i: left index
 * @j: right index
 * Return: 1 if s is palindrome and 0 if not
 */
int palindromeChecker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (palindromeChecker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (palindromeChecker(s, 0, _strlen_recursion(s) - 1));
}
