#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints the size of various types on the computer
 *
 * Return: Return value (if any)
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long: %d byte(s)\n", sizeof(long));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
