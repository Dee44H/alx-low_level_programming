#include "main.h"
#include <unistd.h>

/**
* print_alphabet_x10- prints 10 times the alphabet
*
* Return: Always 0
*/

void print_alphabet_x10(void)
{
	char j;
	int i = 1;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{

			_putchar(j);
		}
	}

	_putchar('\n');
	i++;
}

