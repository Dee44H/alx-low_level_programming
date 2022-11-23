#include<stdio.h>
#include "main.h"
#include<stdlib.h>


/**
 * main - program that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector array of size argc
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int a, b;

	a = 0;

	b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
