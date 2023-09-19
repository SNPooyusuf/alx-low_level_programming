#include "main.h"

/**
 * _isupper - uppercase check
 * @c: char to check
 *
 * Return: 0 for false 1 for true
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	return (0);
}

