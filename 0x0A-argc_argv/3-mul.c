#include<stdio.h>
#include "main.h"
#include<stdlib.h>


/**
 * main - Prints result of multiplication of two numbers
 * @argc: Argument count
 * @argv: Argument vector array of size argc
 *
 * Return: Always 0.
 *
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	a = 0;

	b = 0;

	c = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;

		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
