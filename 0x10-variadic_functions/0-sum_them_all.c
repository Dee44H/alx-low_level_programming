#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
* sum_them_all - function that returns sum of parameters
* @n: unsigned integer
*
* Return: 0 if n is equal to 0, else, sum.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;

int sum = 0;

unsigned int i;


if (n == 0)
{
return (0);
}
va_start(ap, n);

for (i = 0; i < n; i++)
{
sum = sum + va_arg(ap, int);
}

va_end(ap);

return (sum);
}
