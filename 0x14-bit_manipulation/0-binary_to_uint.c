#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int size = 0, x = 0, count = 0;

	if (!b)
		return (0);

	size = strlen(b) - 1;

	while (b[x] != '\0')
	{
		if (b[x] == '0' || b[x] == '1')
		{
			if (b[x] == '1')
			{
				count += (1 * (1 << (size - x)));
			}
			else
			{
				count += 0;
			}
		}
		else
		{
			return (0);
		}
		x++;
	}
	return (count);
}
