#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current = n ^ m, nbits = 0;

	while (current > 0)
	{
		nbits += (current & 1);
		current >>= 1;
	}

	return (nbits);
}
