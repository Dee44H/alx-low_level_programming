#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	char letter1;

	for (letter = 'a'; letter <= 'z'; letter++)

	putchar(letter);

	for (letter1 = 'A'; letter1 <= 'Z'; letter1++)

	putchar(letter1);


	putchar('\n');

	return (0);
}

