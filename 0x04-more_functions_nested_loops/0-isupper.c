#include <unistd.h>
#include "main.h"

/**
 * _isupper - Check if a letter is an upper case character
 * @c: letter to be checked
 *
 * Return:  1 for upper case and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
