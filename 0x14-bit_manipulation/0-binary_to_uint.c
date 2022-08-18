#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: The binary string to converts
 *
 * Retuurn: The postive number converted from a number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
	return (0);

	len = _strlen(b);
	while (len--)
{
	if (b[len] != 48 && b[len] != 49)
	return (0);

	count++;
}
	return (sum);
}
/**
 * _strlen - Returns the lenght of a string
 * @s: String to count
 *
 * Return: String lenght
*/
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
	c++;

	return (c);
}
