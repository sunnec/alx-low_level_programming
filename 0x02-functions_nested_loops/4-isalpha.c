#include "main.h"

/**
 *_isalpha- function checks for alphabets
 *
 *@c:this is the parameter to be tested
 *
 * Return: returns 1 if char is an alphabet else returns 0
 */

int _isalpha(int d)
{
	if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'))
		return (1);
	else
		return (0);
}
