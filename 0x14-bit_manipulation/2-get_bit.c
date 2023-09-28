#include "main.h"

/**
 * get_bit - return the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int Bit;

	if (index > 63)
		return (-1);

	Bit = (n >> index) & 1;

	return (Bit);
}
