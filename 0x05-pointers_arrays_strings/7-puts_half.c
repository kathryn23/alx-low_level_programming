#include "main.h"
/**
 *puts_half - function that prints half of a string, followed by a new line.
 *
 *@str: This is the input string
 */
void puts_half(char *str)
{
	int index = 0, x;

	while (str[index] != '\0')
		index++;

	x = index / 2;

	if (index % 2 == 1)
		x++;

	while (x < index)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
