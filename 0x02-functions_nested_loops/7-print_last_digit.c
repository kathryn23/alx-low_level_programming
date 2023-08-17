#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int x)
{
	x  = x < 0 ? -x : x;
	int last_digit = x % 10;

	_putchar('0' + last_digit);
	_putchar('\n');

	return last_digit;
}
