#include "variadic_functions.h"
/**
 * print_numbers - function prints numbers followed by a new line
 * @n: number of parameters
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
