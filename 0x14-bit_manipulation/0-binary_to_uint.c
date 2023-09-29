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
	int len = 0, i = 0, sum = 0;

	if (!b)
		return (0);

	 len = strlen(b) - 1;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				sum += (1 * (1 << (len - i)));
			}
			else
			{
				sum += 0;
			}
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (sum);
}
