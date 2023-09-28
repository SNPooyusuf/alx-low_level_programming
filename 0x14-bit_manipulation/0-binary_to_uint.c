#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string contain the binary number
 *
 * Return: the convert number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int Con_Num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		Con_Num = 2 * Con_Num + (b[i] - '0');
	}

	return (Con_Num);
}
