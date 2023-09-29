#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
