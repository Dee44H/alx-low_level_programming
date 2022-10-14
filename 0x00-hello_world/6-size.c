#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %ld byte(s)", sizeof(char));	
	printf("Size of int: %ld byte(s)", sizeof(int));
	printf("Size of long int: %ld byte(s)", sizeof(long int));
	printf("Size of long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of float: %ld byte(s)", sizeof(float));
	return (0);
}	
