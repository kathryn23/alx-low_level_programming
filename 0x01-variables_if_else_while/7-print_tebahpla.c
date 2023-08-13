#include <stdio.h>

/**
 * main - Prints reversed alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'z';

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
