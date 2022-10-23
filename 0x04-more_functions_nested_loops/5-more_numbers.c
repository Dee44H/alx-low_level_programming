#include<unistd.h>
#include"main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * return: numbers from 1 to 14, 10 times
 */
void more_numbers(void)
{
	int x, i;

	for (i = 0; i <= 9; i++)

	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}

