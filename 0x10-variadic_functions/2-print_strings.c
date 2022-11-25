#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>


/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings to be passed
 *
 * Return: nil is string is NULL, else 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
		{
			printf("%s", "(nil)");
		}

		else
		{
			printf("%s", va_arg(ap, char *));
		}

		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
